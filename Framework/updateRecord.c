// Function to update a record

#include "loadFieldsAndCount.c"
#include "displayEditableFields.c"
#include "editFields.c"

extern char **fieldsList;
extern int fieldsCount;

void updateRecord()	
{
	FILE *fpValue;
	fpValue = fopen(FRAMEWORKDATA, "r+");
	char fieldValue[20];
	char newFieldValue[20];
	memset(newFieldValue, 0, sizeof(newFieldValue));
	char fieldName[20];
	char fwData[20];
	int counter = 1;
	printf("%s %s: ", ENTER, fieldsList[0]);
	scanf("%s", fieldValue);
	while (fread(&fwData, sizeof(fwData), 1, fpValue)) {
		if (strcmp(fwData, fieldValue) == 0) {
			char choise[2];
			int fieldOption;
			//do {
			displayEditableFields("editableFields.cfg");
			printf("Please Enter Your Option: ");
			scanf("%d", &fieldOption);
			editFields(fieldOption, fpValue);
				//printf("Enter your choise to update again / leave (y/n): ");
				//scanf("%s", choise);
			//}
			//while (strcmp(choise, "y") == 0);
			break;
			}
		}
		fclose(fpValue);
}