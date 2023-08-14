// Store modified linked list data into the file

void storeAccounts()
{
	FILE *fpAccounts;
	fpAccounts = fopen("accountRecords.dat", "w");
	struct Bank *temp;
	temp = head;
	while (temp != NULL) {
		fwrite(temp, sizeof(struct Bank) - sizeof(temp -> next), 1, fpAccounts);
		temp = temp -> next;
	}
	fclose(fpAccounts);
}