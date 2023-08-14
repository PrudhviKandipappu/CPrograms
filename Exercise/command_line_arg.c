
// Print all command line arguments

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int argument_counter;
	printf("Command line argument values are\n");
	for (argument_counter = 1; argument_counter < argc; argument_counter++)
	{
		printf("%s ", argv[argument_counter]);
	}
	return 0;
}