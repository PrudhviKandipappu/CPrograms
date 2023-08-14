
// Program to create strcpy() using function

#include <stdio.h>
#include <stdlib.h>

void stringcopy(char*, char*);

void main()
{
	char *source_name, *copied_name;
	source_name = malloc(20 * sizeof(char));
	copied_name = malloc(20 * sizeof(char));
	printf("Enter a name: ");
	scanf("%s", source_name);
	stringcopy(copied_name, source_name);
	printf("Entered name is: %s \nCopy of entered name is: %s", source_name, copied_name);
}

void stringcopy(char *copied_name, char *source_name)
{
	int index_counter = 0;
	while (source_name[index_counter] != '\0')
	{
		copied_name[index_counter] = source_name[index_counter];
		index_counter++;
	}
}