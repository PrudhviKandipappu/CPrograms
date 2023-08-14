// Test program for testing prime number program

#include <stdio.h>
#include "prime_number_prg.c"

void main()
{
	int check_number[] = {1, 2, 227, 999, 1000, 'A', 'a'};// A-65, a-95
	int return_values[] = {1, 0, 0, 1, 1, 1, 0};
	int flag = 0, counter = 0;
	int count_of_numbers = sizeof(check_number) / sizeof(int);
	while (counter < count_of_numbers)
	{
		if (isprimenumber(check_number[counter]) == return_values[counter])
		{
			flag++;
		}
		else
		{
			printf("Test case failed while passing %d", check_number[counter]);
		}
		counter++;
	}
	if (flag == count_of_numbers)
	{
		printf("Passed");
	}
}