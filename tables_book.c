
//print tables book

#include <stdio.h>

void main()
{
	int tables_count, row_count, counter = 1, table_number = 1;
	printf("Display tables book\n");
	printf("Enter how many tables you want: ");
	scanf("%d", &tables_count);
	printf("Enter how many rows you want in each table:");
	scanf("%d", &row_count);
	int i, j;
	printf("*************Tables Book****************");
	for (i = table_number ; i < tables_count ; i++)
	{	
		printf("Table %d\n", i);
		for (j = counter; j <= row_count; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
}