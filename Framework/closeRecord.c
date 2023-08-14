// Function to close a record

void closeRecord()
{
	FILE *fpRecords, *fpTempData, *fpClosedRecords;
	fpRecords = fopen(FRAMEWORKDATA, "r");
	fpClosedRecords = fopen("ClosedRecords.dat", "a");
	fpTempData = fopen("TemporaryRecords.dat", "w");
	char fieldValue[20];
	char fieldName[20];
	char fwData[20];
	int counter = 1;
	printf("%s %s: ", ENTER, fieldsList[0]);
	scanf("%s", fieldValue);
	while (fread(&fwData, sizeof(fwData), 1, fpRecords)) {
		if (strcmp(fwData, fieldValue) == 0) {
			while (counter <= fieldsCount) {
				fwrite(&fwData, sizeof(fwData), 1, fpClosedRecords);
				counter++;
				fread(&fwData, sizeof(fwData), 1, fpRecords);
			}
		}
		else {
			fwrite(&fwData, sizeof(fwData), 1, fpTempData);
		}
	}
	fclose(fpTempData);
	fclose(fpRecords);
	fclose(fpClosedRecords);
	remove("Framework.dat");
	rename("TemporaryRecords.dat", "Framework.dat");
}