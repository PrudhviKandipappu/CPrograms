// Function display editable field names

void displayEditableFields(char *cfgFileName)
{
	FILE *fpEditableFields;
	fpEditableFields = fopen(cfgFileName, "r");
	char asciiValue[3];
	int index;
	//asciiValue = fgetc(fpEditableFields);
	printf("--------------------------------------\n");
	fgets(asciiValue, sizeof(asciiValue), fpEditableFields);
	while (!feof(fpEditableFields)) {
		index = atoi(asciiValue);
		printf("%d.%s\n", index, fieldsList[index - 1]);
		fgets(asciiValue, sizeof(asciiValue), fpEditableFields);
		}
	printf("--------------------------------------\n");
	fclose(fpEditableFields);
}