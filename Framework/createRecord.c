// Funtion to create new record

FILE *fpData;
char data[20];
char fwData[20];

void createRecord()
{
	int fieldCounter = 0;
	while (fieldCounter < fieldsCount - 1) {
		printf("%s %s: ", ENTER, fieldsList[fieldCounter]);
		memset(fwData, 0, sizeof(fwData));
		scanf("%s", fwData);
		fpData = fopen(FRAMEWORKDATA, "a");
		fwrite(&fwData, sizeof(fwData), 1, fpData);
		fclose(fpData);
		fieldCounter++;
	}
}