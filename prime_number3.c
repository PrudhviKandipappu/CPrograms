
// Check given number is prime or not

#include <stdio.h>

void main()
{
	int number, iterations, counter = 3, factors = 0;
	printf("Check given number is prime or not\n");
	printf("Enter a number: ");
	scanf("%d", &number);
	if (number != 2)
	{
		if (number % 2 != 0)
		{
			iterations = number / 2;
			while (counter <= iterations)
			{
				if (number % counter)
				{
					factors = factors + 1;
				}
				counter = counter + 2;
			}
			if (factors == 0)
			{
				printf("%d is a prime number", number);
			}
			else
			{
				printf("%d is not a prime number", number);
			}
		}
		else
		{
			printf("%d is not a prime number", number);
		}
	}
	else
	{
		printf("%d is a prime number", number);
	}
}