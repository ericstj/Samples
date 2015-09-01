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

if NOT DEFINED DNX_HOME (
  @powershell -NoProfile -ExecutionPolicy unrestricted -Command "&{$Branch='dev';iex ((new-object net.webclient).DownloadString('https://raw.githubusercontent.com/aspnet/Home/dev/dnvminstall.ps1'))}"
)

REM make sure we have the desired version of DNX installed
call dnvm install 1.0.0-beta6 -r clr

REM the xproj tooling doesn't honor path so make sure we set this
call set RuntimeToolingDirectory=%DNX_HOME%\runtimes\dnx-clr-win-x86.1.0.0-beta6

if NOT EXIST "%NuGet%" (
  @powershell -NoProfile -ExecutionPolicy unrestricted -Command "(New-Object System.Net.WebClient).DownloadFile(\"%nugetsource%\", \"%NuGet%\")"
)

"%MSBuild%" build.proj



ENDLOCAL