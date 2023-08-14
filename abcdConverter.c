// Read a number and store it into a file as characters

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
	int number;
	char *name = malloc(20);
	printf("Enter a number to store: ");
	scanf("%d", &number);
	FILE *fpNumber;
	fpNumber = fopen("storeABCD.txt", "w");
	fwrite(&number, sizeof(int), 1, fpNumber);
	fclose(fpNumber);
	fpNumber = fopen("storeABCD.txt", "r");
	fread(name, 20, 1, fpNumber);
	name[strlen(name) - 1] = '\0';
	printf("Text: %s", name);
	fclose(fpNumber);
}