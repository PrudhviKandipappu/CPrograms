
// Print biggest and smallest numbers of 10 hard coded numbers

#include <stdio.h>
#define COUNT_OF_NUMBERS 10

void main()
{
	int numbers[COUNT_OF_NUMBERS] = {10, 23, 19, 5, 43, 31, 29, 4, 18, 59};
	int number_counter, iteration_counter;
	int temp;
	for (iteration_counter = 1; iteration_counter < COUNT_OF_NUMBERS; iteration_counter++)
	{
		for (number_counter = 0; number_counter < COUNT_OF_NUMBERS; number_counter++)
		{
			if (numbers[number_counter] > numbers[number_counter + 1])
			{
				temp = numbers[number_counter];
				numbers[number_counter] = numbers[number_counter + 1];
				numbers[number_counter + 1] = temp;
			}
		}
	}
	printf("%d is biggest among %d numbers\n", numbers[COUNT_OF_NUMBERS - 1], COUNT_OF_NUMBERS);
	printf("%d is smallest among %d numbers\n", numbers[0], COUNT_OF_NUMBERS);
}