
// Biggest and smallest of n numbers

#include <stdio.h>

void main()
{
	int count, number, biggest, smallest, counter = 1;
	printf("Calculate biggest and smallest of n numbers\n");
	printf("Enter how many numbers you want to compare: ");
	scanf("%d", &count);
	printf("Enter a number:");
	scanf("%d", &number);
	biggest = number;
	smallest = number;
	while (counter < count)
	{
		printf("Enter a number:");
		scanf("%d", &number);
		if (biggest < number)
		{
			biggest = number;
		}
		if (smallest > number)
		{
			smallest = number;
		}
		counter = counter + 1;
	}
	printf("%d is biggest among all numbers\n", biggest);
	printf("%d is smallest among all numbers", smallest);
}