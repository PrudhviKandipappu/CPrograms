
// Print the series 1, 4, 27, 256 , . . . . up to n terms

#include <stdio.h>
#include <conio.h>

void main()
{
	int count, counter, product, series_number = 1, j;
	printf("Display the series like 1, 4, 27, 256, . . . n\n");
	printf("Enter how many numbers you want in the series: ");
	scanf("%d", &count);
	printf("Series is: ");
	while (series_number <= count)
	{
		counter = 1,product = 1;
		for (j = counter; j <= series_number ; j++)
		{
			product = product * series_number;
		}
		printf("%d", product);
		series_number = series_number + 1;
		if (series_number <= count)
		{
			printf(",");
		}
	}
	printf(".");
} 