
// Read and print 5 names

#include <stdio.h>

void main()
{
	int counter, i;
	char name[10];
	printf("Enter 5 presons  names for print\n");
	for (i = 1;i <= 5; i++)
	{
		printf("Enter a person name: ");
		scanf("%s", name);
		printf("Person %d: %s\n", i, name);
	}
}