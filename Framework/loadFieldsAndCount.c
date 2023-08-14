// Function to find fields count and store filenames in an array and declare those as global

int fieldsCount;
char **fieldsList;

void setFieldsCount()
{
	FILE *fpFields;
	fpFields = fopen("Fields.cfg", "r");
	char fieldName[20];
	fieldsCount = 1;
	int counter = 0;
	while (!feof(fpFields)) {
		fgets(fieldName, sizeof(fieldName), fpFields);
		if (fieldName[strlen(fieldName) - 1] == '\n') {
			fieldsCount++;
		}
		counter++;
	}
	fieldsCount--;
	rewind(fpFields);
	fieldsList = (char**)malloc(fieldsCount * sizeof(char*));
	int fieldNameCounter = 0;
	while (fieldNameCounter < fieldsCount) {
		fieldsList[fieldNameCounter] = (char*)malloc(20 * sizeof(char));
		//avoidNewLine(fieldsList[fieldNameCounter]);
		fgets(fieldName, sizeof(fieldName), fpFields);
		strcpy(fieldsList[fieldNameCounter], avoidNewLine(fieldName));
		fieldNameCounter++;
	}
	fclose(fpFields);
}