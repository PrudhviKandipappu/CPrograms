// Test program for checking a prime number program

#include <stdio.h>
#include "prime_number_function.c"
#include "factors_of_number.c"

void main()
{
	int possible_inputs[] = {1, 2, 227, 999, 1000};
	int counter = 0, flag = 0;
	while (counter < sizeof(possible_inputs) / sizeof(int))
	{
		if (isprimenumber(possible_inputs[counter]) == factors_count(possible_inputs[counter]))
		{
			flag++;
		}
		else
		{
			printf("Test case failed while passing %d\n", possible_inputs[counter]);
		}
		counter++;
	}
	if (flag == 5)
	{
		printf("Passed");
	}
}