
// Check given number is prime or not

#include <stdio.h>

void main()
{
	int number, counter = 1, prime_counter = 0;
	printf("Check given number is prime or not\n");
	printf("Enter a number: ");
	scanf("%d", &number);
	while (counter <= number)
	{
		if (number % counter == 0)
		{
			prime_counter = prime_counter + 1;
		}
		counter = counter + 1;
	}
	printf("prime_counter = %d\n", prime_counter);
	if (prime_counter == 2)
	{
		printf("%d is a prime number", number);
	}
	else
	{
		printf("%d is not a prime number", number);
	}
}