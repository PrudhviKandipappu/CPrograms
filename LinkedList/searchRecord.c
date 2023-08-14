// Function to search a specifed record

struct Bank* searchRecord()
{
	struct Bank *temp;
	temp = head;
	char accountNumber[15];
	printf("Enter the account number: ");
	scanf("%s", accountNumber);
	while (temp != NULL) {
		if (strcmp(temp -> accountNumber, accountNumber) == 0) {
			return temp;
		}
		temp = temp -> next;
	}
	temp = NULL;
	return temp;
}