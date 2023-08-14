// Get binary data of some other files

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binaryConverterChar.c"

void main()
{
	char *fileName = malloc(50);
	int byteCount = 4;
	char data;
	printf("Enter a file name with extension to get their binary data: ");
	scanf("%s", fileName);
	FILE *fpBinaryData;
	fpBinaryData = fopen(fileName, "rb");
	while (fread(&data, sizeof(char), 1, fpBinaryData))
	{
		printBinaryValue(data);
	}
	fclose(fpBinaryData);
}