// Convert text into binary form

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "converterFunction.c"

void main()
{
	char text[20];
	int counter = 0;
	printf("Enter a text to get their bianry form: ");
	gets(text);
	printf("Binary Value: ");
	while(text[counter] != '\0')
	{
		int ascciValue = (int)text[counter];
		printBinaryValue(ascciValue);
		counter++;
	}
}