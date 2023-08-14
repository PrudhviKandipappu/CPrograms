
// Print sum of first n natural numbers

#include <stdio.h>

void main()
{
	int count;
	printf("Calaculate sum of first n natural numbers\n");
	printf("Enter how many numbers you want to sum: ");
	scanf("%d", &count);
	int counter = 1, sum_of_naturalnaumbers = 0;
	while (counter <= count)
	{
		sum_of_naturalnaumbers = sum_of_naturalnaumbers + counter;
		counter = counter + 1;	
	}	
	printf("Sum of first %d natural numbers is: %d", count, sum_of_naturalnaumbers);
}