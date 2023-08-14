
// Read a name and print using pointer

#include <stdio.h>
#include <stdlib.h>

void main()
{
	char *name;
	name = malloc(20);
	printf("Enter a name: ");
	scanf("%s", name);
	printf("Entered name is: %s", name);
}