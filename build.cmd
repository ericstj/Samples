@echo off > nul

REM Build ClassLibrary
%WINDIR%\Microsoft.Net\Framework\v4.0.30319\msbuild Satellite-Packages\ClassLibrary\ClassLibrary.csproj

SETLOCAL
SET nugetsource=https://dist.nuget.org/win-x86-commandline/v3.1.0-beta/nuget.exe
SET bin=%~dp0bin
SET nuget=%bin%\NuGet.exe
SET packages=%~dp0\packages
if NOT EXIST %bin% md %bin%
if NOT EXIST %packages% md %packages%

if NOT EXIST %nuget% (
  powershell -Command "(New-Object System.Net.WebClient).DownloadFile(\"%nugetsource%\", \"%nuget%\")"
)

REM Build the NuGet packages from ClassLibrary
%nuget% pack Satellite-Packages\ClassLibrary\ClassLibrary.nuspec -OutputDirectory %packages%
%nuget% pack Satellite-Packages\ClassLibrary\ClassLibrary.ja-jp.nuspec -OutputDirectory %packages%
%nuget% pack Satellite-Packages\ClassLibrary\ClassLibrary.ru-ru.nuspec -OutputDirectory %packages%
%nuget% pack Satellite-Packages\ClassLibrary\ClassLibrary.cs.nuspec -OutputDirectory %packages%
%nuget% pack Satellite-Packages\ClassLibrary\ClassLibrary.Localization.nuspec -OutputDirectory %packages%

REM Restore packages
%nuget% restore Satellite-Packages\SatellitePackageSample.sln

REM Build the ConsoleApp
%WINDIR%\Microsoft.Net\Framework\v4.0.30319\msbuild Satellite-Packages\ConsoleApp\ConsoleApp.csproj

ENDLOCAL