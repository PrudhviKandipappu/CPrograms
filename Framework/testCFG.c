// Test cfg records / data

#include <stdio.h>

void main()
{
	FILE *fpEditableFields;
	fpEditableFields = fopen("editableFields.cfg", "r");
	char asciiNumber;
	fread(&asciiNumber, sizeof(asciiNumber), 1,fpEditableFields);
	printf("%c\n", asciiNumber);
	printf("%d\n", asciiNumber);
	printf("%d\n", asciiNumber - 48);
	fclose(fpEditableFields);
}