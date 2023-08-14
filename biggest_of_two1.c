
// Biggest of two numbers with one extra variable

#include <stdio.h>

void main()
{
	int number1, number2, temp;
	printf("Find biggest of two numbers\n");
	printf("Enter a number: ");
	scanf("%d", &number1);
	printf("Enter another number: ");
	scanf("%d", &number2);
	if (number1 != number2)
	{
		if (number2 > number1)
		{
			temp = number2;
			number2 = number1;
			number1 = temp;
		}
		printf("%d is bigger than %d", number1, number2);
	}
	else
	{
		printf("%d is equal to %d ", number1, number2);
	}
}