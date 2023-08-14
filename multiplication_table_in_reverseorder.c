
// Multiplication table of given number in reverse order

#include <stdio.h>

void main()
{
	int table_number, row_count, decreaser;
	printf("Display multiplication table of a given number in reverse order\n");
	printf("Enter a number to get their multiplication table in reverse order: ");
	scanf("%d", &table_number);
	printf("Enter how many row you want in a table: ");
	scanf("%d", &row_count);
	decreaser = row_count;
	printf("Multiplication table of %d in reverse order\n", table_number);
	while (decreaser > 0)
	{
		printf("%d x %d = %d \n", table_number, decreaser, table_number * decreaser);
		decreaser = decreaser - 1;
	}
}