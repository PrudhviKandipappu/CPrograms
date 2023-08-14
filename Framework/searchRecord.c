// Function to search a record

void searchRecord()
{
	printf("\n");
	fpData = fopen(FRAMEWORKDATA, "r");
	int counter = 0;
	printf("%s %s: ", ENTER, fieldsList[0]);
	scanf("%s", data);
	while (fread(&fwData, sizeof(fwData), 1, fpData)) {
		if (strcmp(fwData, data) == 0) {
			while (counter < fieldsCount - 1) {
				printf("%s: %s\n", fieldsList[counter], fwData);
				fread(&fwData, sizeof(fwData), 1, fpData);
				counter++;
			}
			printf("\n");
			break;
		}
	}
	fclose(fpData);
}