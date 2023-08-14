// Function to check wheather given number is prime or not

#include <math.h>

int isprimenumber(int number)
{
	int sqrt_number = sqrt(number); 
	int counter = 1, prime_counter = 0;
	while (counter <= sqrt_number)
	{
		if(number % counter == 0)
		{
			prime_counter++;
		}
		counter++;
	}
	return prime_counter + 1;
}
