// Function to show records

void showRecords()
{
	FILE *fpData;
	fpData = fopen(FRAMEWORKDATA, "r");
	char fwData[20];
	char fldData[20];
	int counter = 0, recordCounter = 1;
	while (fread(&fwData, sizeof(fwData), 1, fpData)) {
		printf("%s: %s \n", fieldsList[counter], fwData);
		counter++;
		if (counter == fieldsCount - 1) {
			printf("--------------------------------------\n");
			counter = 0;
		}
	}
	fclose(fpData);
}