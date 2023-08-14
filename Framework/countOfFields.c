// Function to find no.of fields in a file

int countOfFields()
{
	FILE *fpFields;
	fpFields = fopen("Fields.cfg", "r");
	char fieldName[20];
	int counter = 0;
	while(!feof(fpFields)) {
		fgets(fieldName, sizeof(fieldName), fpFields);
		if (fieldName[strlen(fieldName) - 1] == '\n') {
			counter++;
		}
	}
	fclose(fpFields);
	return counter - 1;
}