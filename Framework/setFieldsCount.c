// Function set fields count as global variable

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
extern int fieldsCount;
extern char *fieldList;

void setFieldsCount()
{
	FILE *fpFields;
	fpFields = fopen("Fields.cfg", "r");
	char fieldName[20];
	//int fieldsCount = 0;
	while (!feof(fpFields)) {
		fgets(fieldName, sizeof(fieldName), fpFields);
		if (fieldName[strlen(fieldName) - 1] == '\n') {
			fieldsCount++;
		}
	}
	//extern fieldsCount;
	char *fieldList = malloc(fieldsCount * sizeof(fieldName));
	while (!feof(fpFields)) {
		fgets(fieldName, sizeof(fieldName), fpFields);
		*fieldList = fieldName;
		fieldList = fieldList + sizeof(fieldName);
	}
	extern fieldList;
	fclose(fpFields);
}

void main()
{
	setFieldsCount();
	int counter = 0;
	while (counter < fieldsCount) {
		printf("%s", fieldList);
		fieldList = fieldList + 20;
		counter++;
	}
}