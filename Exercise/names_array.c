
// Read and print n names using without pointers

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int count_of_names, name_counter;
	printf("Enter several names to store\n");
	printf("Enter how many name you want to store: ");
	scanf("%d", &count_of_names);
	char names[count_of_names][20];
	for (name_counter = 0; name_counter < count_of_names; name_counter++)
	{
		printf("Enter a name: ");
		scanf("%s", names[name_counter]);
	}
	printf("Names of different persons are\n");
	for (name_counter = 0; name_counter < count_of_names; name_counter++)
	{
		printf("Person %d name: %s\n", name_counter + 1, names[name_counter]);
	}
	return 0;
}