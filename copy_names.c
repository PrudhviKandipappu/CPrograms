
// Copy one name and stored into another

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char *name1, *name2;
	name1 = malloc(300);
	name2 = malloc(300);
	printf("Enter a name: ");
	scanf("%s", name1);
	strcpy(name2, name1);
	printf("%d\n", sizeof(name1));
	printf("First name is: %s and Second name is: %s\n", name1, name2);
	//printf("Address of name1 is: %u and Address of name2: %u", name1, name2);
}