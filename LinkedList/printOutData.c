// Print out the data of a file

void printOutData()
{
	FILE *fpData;
	fpData = fopen("accountRecords.dat", "r");
	FILE *fpRecords;
	fpRecords = fopen("printOutFormat.dat", "w");
	struct Bank *account;
	account = (struct Bank*)malloc(sizeof(struct Bank));
	int accountCounter = 1;
	while (fread(account, sizeof(struct Bank) - sizeof(account), 1, fpData)) {
		fprintf(fpRecords, "***Account %d Details***\n", accountCounter);
		fprintf(fpRecords, "Account Number: %s\n", account -> accountNumber);
		fprintf(fpRecords, "Customer Name: %s\n", account -> customerName);
		fprintf(fpRecords, "Account Type: %s\n", account -> accountType);
		fprintf(fpRecords, "Balance Amount: %d\n", account -> balanceAmount);
		fprintf(fpRecords, "Account Status: %c\n", account -> accountStatus);
		accountCounter++;
		account = (struct Bank*)malloc(sizeof(struct Bank));
	}
	fclose(fpRecords);
	fclose(fpData);
	system("notepad/p printOutFormat.dat");
}