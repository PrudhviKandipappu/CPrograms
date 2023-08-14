
// Create strcat() function using function concept

#include <stdio.h>
#include <stdlib.h>

char* string_concatination(char*, char*);

void main()
{
	char *first_name, *second_name, *full_name;
	first_name = malloc(20);
	second_name = malloc(20);
	full_name = malloc(40);
	printf("Enter fisrt name and second name to concatination\n");
	printf("Enter your first name: ");
	scanf("%s", first_name);
	printf("Enter your second name: ");
	scanf("%s", second_name);
	full_name = string_concatination(first_name, second_name);
	printf("Your full name is: %s", full_name);
}

char* string_concatination(char* first_name, char* second_name)
{
	int index_counter = 0, second_index_counter = 0;
	char *full_name = malloc(40);
	while (first_name[index_counter] != '\0')
	{
		
		full_name[index_counter] = first_name[index_counter];
		index_counter++;
	}
	while (second_name[second_index_counter] != '\0')
	{
		full_name[index_counter] = second_name[second_index_counter];
		index_counter++;
		second_index_counter++;
	}
	full_name[index_counter] = '\0';
	return full_name;
}
