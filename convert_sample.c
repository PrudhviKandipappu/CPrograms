
// Read and print a long name 

#include <stdio.h>

void main()
{
	char text[10];
	printf("Enter a text to print: ");
	scanf("%s", text);
	printf("Text is: %s\n", text);
	long int *ptr = (long int*)text;
	printf("Number is: %lo\n", *ptr);
	printf("Text: ", (char*)*ptr);
}