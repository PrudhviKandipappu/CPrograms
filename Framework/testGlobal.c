// Function to find fields count and store filenames in an array and declare those as global

int fieldsCount;
char **fieldsList;

void setFieldsCount()
{
	FILE *fpFields;
	fpFields = fopen(FIELDS, "r");
	char fieldName[20];
	fieldsCount = 0;
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
		fgets(fieldsList[fieldNameCounter], sizeof(fieldName), fpFields);
		fieldNameCounter++;
	}
	fclose(fpFields);
}