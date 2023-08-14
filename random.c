
// Print a random number below 10

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int random_number;
	srand(time(0));
	random_number = rand();
	while (random_number >= 0)
	{
		if (random_number < 10)
		{
			printf("Random number: %d\n", random_number);
			break;
		}
		random_number = rand();
	}
}