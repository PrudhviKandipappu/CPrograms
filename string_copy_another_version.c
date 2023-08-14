
// Creat a user-defined function of strcpy() using function concept, accessing character as *ptr_variable

#include <stdio.h>
#include <stdlib.h>

void string_copy(char*, char*);

void main()
{
	char *source_name, *copied_name;
	source_name = (char*)malloc(20 * sizeof(char));
	copied_name = (char*)malloc(20 * sizeof(char));
	printf("Enter a name: ");
	scanf("%s", source_name);
	string_copy(copied_name, source_name);
	printf("Entered name is: %s\n", source_name);
	printf("Copied name is: %s", copied_name);
}

void string_copy(char *copied_name, char *source_name)
{
	while (*source_name != '\0')
	{
		*copied_name = *source_name;
		copied_name++;
		source_name++;
	}
}