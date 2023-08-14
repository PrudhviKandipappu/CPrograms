
// Multiplication table of a given number

#include <stdio.h>

void main()
{
	printf("Display multiplication table of a given number\n");
	int table_number, row_count;
	printf("Enter a number to get their multiplication table: ");
	scanf("%d", &table_number);
	printf("Enter how many rows you want in a table: ");
	scanf("%d", &row_count);
	int counter = 1, product = 1;
	printf("Multiplication table of a %d\n", table_number);
	while (counter <= row_count)
	{
		printf("%d x %d = %d\n", table_number, counter, table_number * counter);
		counter ++;
	}
}