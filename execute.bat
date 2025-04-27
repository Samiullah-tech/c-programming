@echo off
REM Check if a source file was provided
if "%1"=="" (
    echo Usage: %0 source_file.c
    exit /b 1
)

REM Get the source file from the argument
set SOURCE_FILE=%1

REM Check if the file exists
if not exist "%SOURCE_FILE%" (
    echo Error: File "%SOURCE_FILE%" not found!
    exit /b 1
)

REM Extract the base name of the file (without the extension)
for %%F in ("%SOURCE_FILE%") do set EXEC_FILE=%%~nF

REM Compile the C program
gcc  "%SOURCE_FILE%" -o "%EXEC_FILE%.exe"

REM Check if the compilation was successful
if %errorlevel% neq 0 (
    echo Compilation failed!
    exit /b 1
)

REM Run the executable
"%EXEC_FILE%.exe"

REM Delete the executable after running it
del "%EXEC_FILE%.exe"
