
// Print biggest of two numbers

#include <stdio.h>

void main()
{
	int number1, number2, biggest, smallest;
	printf("Find the biggst of two numbers\n");
	printf("Enter a number:");
	scanf("%d", &number1);
	printf("Enter another number:");
	scanf("%d", &number2);
	if (number1 != number2)
	{
		if (number1 > number2)
		{
			biggest = number1;
			smallest = number2;
		}
		if (number2 > number1)
		{
			biggest = number2;
			smallest = number1;
		}
		printf("%d is bigger than %d ", biggest, smallest);
	}
	else
	{
		printf("%d is equal to %d", number1, number2);
	}
}