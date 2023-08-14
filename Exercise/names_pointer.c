
// Read and print n names

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char **p2pnames;
	int count_of_names, namesize = 20, name_counter;
	printf("Enter person names to store\n");
	printf("Enter how many name you want to store: ");
	scanf("%d", &count_of_names);
	p2pnames = malloc(count_of_names * sizeof(char*));
	for (name_counter = 0; name_counter < count_of_names; name_counter++)
	{
		p2pnames[name_counter] = malloc(namesize * sizeof(char));
		printf("Enter a name: ");
		scanf("%s", p2pnames[name_counter]); 
	}
	for (name_counter = 0; name_counter < count_of_names; name_counter++)
	{
		printf("Person %d name: %s", name_counter + 1, p2pnames[name_counter]);
		printf("\n");
	}
	return 0;
} 