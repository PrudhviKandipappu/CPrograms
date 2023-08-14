// Print text with underline by using printf and a function

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printUnderLine(char*);

void main()
{
	int character_count;
	char *text = (char*)malloc(20 * sizeof(char));
	printf("Enter a text: ");
	gets(text);
	printUnderLine(text);
}

void printUnderLine(char* text)
{
	int character_count = printf("%s", text);
	printf("\n");
	int counter = 0;
	while (counter < character_count)
	{
		printf("-");
		counter++;
	}
}