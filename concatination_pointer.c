
// Concate two names or strings using pointer

#include <stdio.h>
#include <stdlib.h>

void main()
{
	char *first_name, *last_name, *full_name;
	first_name = malloc(20);
	last_name = malloc(20);
	full_name = malloc(40);
	printf("Enter your first name and last name to concat\n");
	printf("Enter your first name: ");
	scanf("%s", first_name);
	printf("Enter your second name: ");
	scanf("%s", last_name);
	full_name = strcat(first_name, last_name);
	//full_name = first_name - last_name;
	printf("Your name is: %s", full_name);
}