@echo off
:a
echo
--------------------------claculator---------------------------
echo.
set /p expression= Enter a expression to calculate:
set /a ans=%expression%
echo.
echo = %ans%
echo
pause
cls
set /p choise= Enter your choise to continue or terminate[Y/N]? 
if %choise%==y goto a
@echo on
