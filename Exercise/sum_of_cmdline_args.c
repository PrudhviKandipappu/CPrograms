
// Sum of command line arguments

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int sum_of_arguments = 0;
	int counter;
	printf("Sum of all command line arguments\n");
	for (counter = 1; counter <= argc; counter++)
	{
		sum_of_arguments = sum_of_arguments + atoi(argv[counter]);
	}
	printf("Sum of %d command line arguments is: %d", argc - 1, sum_of_arguments);
	return 0;
}