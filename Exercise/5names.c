// Read and print 5 names

#include <stdio.h>

void main()
{
	int name_counter;
	int const count_of_names = 5; 
	char names[count_of_names][20];
	printf("Enter 5 names to print\n");
	for (name_counter = 0; name_counter < count_of_names; name_counter++)
	{
		printf("Enter a name: ");
		scanf("%s", &names[name_counter]);
	}
	printf("Names of the different persons are\n");
	for(name_counter = 0; name_counter < count_of_names; name_counter++)
	{
		printf("Person %d:", name_counter + 1);
		printf("%s\n", names[name_counter]);
	}
}