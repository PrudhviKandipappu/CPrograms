
// Check given number is prmie or not

#include <stdio.h>
#include <math.h>

void main()
{
	int number, square_root, counter = 3, factor_count = 0;
	printf("Check given number is prime or not \n");
	printf("Enter a number: ");
	scanf("%d", &number);
	square_root = sqrt(number);
	if (number != 2)
	{
		if (number % 2 != 0)
		{
			while (counter <= square_root)
			{
				if (number % counter == 0)
				{
					factor_count = factor_count + 1;
				}
				counter = counter + 2;

			}
			if (factor_count == 0)
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