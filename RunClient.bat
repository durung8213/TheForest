@echo off
set "currentDir=%~dp0"
for %%F in ("%currentDir:~0,-1%") do set "folderName=%%~nF"

"C:\UE\UE427\Engine\Binaries\Win64\UE4Editor.exe" "%~dp0%folderName%.uproject" -game -log -windowed -resx=960 -resy=540 -forceres