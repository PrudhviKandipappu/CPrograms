
// Print 10 hardcoded names in random order using 2D array

#include <stdio.h>
#include <stdlib.h>
#define COUNT_OF_NAMES 10
#define SIZE_OF_NAME 20

void main()
{
	char names[COUNT_OF_NAMES][SIZE_OF_NAME] = {
		"Prudhvi", "Ram", "Shiva", "Krishna", "Sai",
		"Manikanta", "Pavan", "Sri", "Sathya", "Usha"
	};
	int name_counter = 0, counter;
	int last_number, random_number;
	int random_values[COUNT_OF_NAMES];
	srand(time(0));
	random_number = rand();
	while (random_number >= 0  && name_counter < COUNT_OF_NAMES)
	{
		last_number = 0;
		for (counter = 0; counter < COUNT_OF_NAMES; counter++)
		{
			if (random_number == random_values[counter])
			{
				last_number++;
			}
		}
		if (last_number == 0 && random_number < 10)
		{
			printf("Name %d: %s\n", name_counter + 1, names[random_number]);
			random_values[name_counter] = random_number;
			name_counter++;
		}
		random_number = rand();
	}
}