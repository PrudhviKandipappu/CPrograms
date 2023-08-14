
// Print factorial of a given number

#include <stdio.h>

void main()
{
	int number, factorial = 1;
	printf("Enter a number to get their factorial: ");
	scanf("%d", &number);
	printf("Factorial of a %d is: ", number);
	while (number > 0)
	{
		factorial = factorial * number;
		number = number - 1;
	}
	printf("%d", factorial);
}