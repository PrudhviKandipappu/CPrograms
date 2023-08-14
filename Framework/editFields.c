// Function to edit fields

void editFields(int option, FILE *fpValue)
{
	char updatedFieldValue[20];
	memset(updatedFieldValue, 0, sizeof(updatedFieldValue));
	printf("Please Enter New %s: ", fieldsList[option - 1]);
	scanf("%s", updatedFieldValue);
	fseek(fpValue, (sizeof(updatedFieldValue) * (option - 2)), SEEK_CUR);// ?
	fwrite(&updatedFieldValue, sizeof(updatedFieldValue), 1, fpValue);
}