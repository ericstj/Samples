@echo off > nul

SETLOCAL
SET MSBuild=%ProgramFiles(x86)%\MSBuild\14.0\Bin\MSBuild.exe
SET bin=%~dp0bin
SET NuGet=%bin%\NuGet.exe
SET PackageOutputDir=%bin%\packages
SET NuGetPackages=%~dp0\packages
SET NuGetSource=https://dist.nuget.org/win-x86-commandline/v3.1.0-beta/nuget.exe

if NOT EXIST %bin% md %bin%
if NOT EXIST %NuGetPackages% md %NuGetPackages%

if NOT EXIST "%MSBuild%" (
  echo MSBuild 14 is required, please ensure you've installed Visual Studio 2015.
  exit /b 1
)

if NOT EXIST "%NuGet%" (
  powershell -Command "(New-Object System.Net.WebClient).DownloadFile(\"%nugetsource%\", \"%NuGet%\")"
)

"%MSBuild%" restore-src.proj
"%MSBuild%" build-src.proj
"%MSBuild%" build-packages.proj
"%MSBuild%" restore-test.proj
"%MSBuild%" build-test.proj


ENDLOCAL