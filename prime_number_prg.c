// Function to check wheather given number is prime or not

#include <math.h>

int isprimenumber(int number)
{
	int sqrt_number = sqrt(number); 
	int counter = 2, prime_counter = 0;
	if (number > 1)
	{
		while (counter <= sqrt_number)
		{
			if(number % counter == 0)
			{
				prime_counter++;
			}
			counter++;
		}
	}
	else
	{
		prime_counter = 1;
	}
	if (prime_counter > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
