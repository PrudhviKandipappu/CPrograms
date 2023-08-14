// Function to change record

#include <stdio.h>
#include <string.h>
#include "avoidNewLine.c"

void changeRecord()
{
	FILE *fpData;
	FILE *fpFields;
	fpData = fopen("Framework.dat", "r+");
	fpFields = fopen("Fields.cfg", "r");
	char id[20];
	char newData[20];
	char field[20];
	char data[20];
	printf("Enter your id: ");
	scanf("%s", id);
	int counter = 0;
	while (fread(&data, sizeof(data), 1, fpData)) {
		if (strcmp(data, id) == 0) {
			while (counter <= 3) {
				fgets(field, sizeof(field), fpFields);
				counter++;
			}
			fseek(fpData, -(sizeof(data)), SEEK_CUR);
			printf("Enter new %s ", avoidNewLine(field));
			scanf("%s", newData);
			fwrite(&newData, sizeof(newData), 1, fpData);
			break;
		}
	}
	fclose(fpData);
	fclose(fpFields);
}

void main()
{
	changeRecord();
}