
// Copy contents from one variable to other

#include <stdio.h>

void copy(char [], char []);
void main()
{
	char ptr_name1[20];
	char ptr_name2[20];
	printf("Enter a name to store: ");
	scanf("%s", ptr_name1);
	printf("Name1: %s\n", ptr_name1);
	copy(ptr_name2, ptr_name1);
	printf("Name2: %s", ptr_name2);
}
void copy(char to[20], char from[20])
{
	int counter = 0;
	while ((to[counter] = from[counter]) != '\0')
	{
		counter++;
	}
}