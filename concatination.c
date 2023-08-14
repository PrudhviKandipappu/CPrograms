
// Program to concate two strings or names

#include <stdio.h>
#include <string.h>
#define NAME_SIZE 20

void main()
{
	char first_name[NAME_SIZE], last_name[NAME_SIZE], *name;
	printf("Enter first name and last name to concat\n");
	printf("Enter your first name: ");
	scanf("%s", first_name);
	printf("Enter your last name: ");
	scanf("%s", last_name);
	name = strcat(first_name, last_name);
	//name = first_name + last_name;
	printf("Your name is: %s", name);
}