
// Print given name given number of times using command line arguments

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int counter;
	int return_value;
	if (argc > 1)
	{
		return_value = strcmp(argv[1], argv[2]);
		if (return_value > 0)// argv[1] => [name], argv[2] => [times]
		{
			argv[0] = argv[1];
			argv[1] = argv[2];
			argv[2] = argv[0];
		}
		printf("Print %s %d times", argv[2], atoi(argv[1]));
		for (counter = 0; counter < atoi(argv[1]); counter++)
		{
			printf("\n%d:%s", counter + 1, argv[2]);
		}
	}
	else
	{
		printf("Please enter a name and how many time you want to print it ");
		printf("Either in the form of \n<program_name> [name / text] [how_many_times_you_want_to_print] \n\tor \n<program_name> [how_many_times_you_want_to_print] [name / text]\n");
	}
	return 0;
}