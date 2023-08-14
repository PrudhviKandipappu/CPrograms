@ECHO OFF
rem Print multiplication table of a given number
set /p table_number= Enter a table number: 
set /p row_count= How many rows you want in a table: 
FOR /l %%X IN (1,1,%row_count%) DO ( 
set /a product = %table_number% * %%X
echo %table_number% x %%X =  %product%
)