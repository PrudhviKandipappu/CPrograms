 
 // Create a test program to my programs --- stringcopy()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string_copy.c"
 
void main()
{
	char *source, *copied, *copy_strcpy; 
	source = (char*)malloc(20 * sizeof(char));
	copied = (char*)malloc(20 * sizeof(char));
	copy_strcpy = (char*)malloc(20 * sizeof(char));
	printf("Enter a name: ");
	scanf("%s", source);
	stringcopy(copied, source);
	printf("---Copy by using stringcopy()---\n");
	printf("Entered name: %s", source);
	printf("\nCopied name: %s\n", copied);
	printf("---Copy by using strcpy()---\n");
	strcpy(copy_strcpy, source);
	printf("Entered name: %s", source);
	printf("\nCopied name: %s", copy_strcpy);
}