// Function to search an account

void searchAccount()
{
	struct Bank *temp;
	temp = searchRecord();
	if (temp != NULL) {
		printf("%s's Account Details\n", temp -> customerName);
		printf("Account Number: %s\n", temp -> accountNumber);
		printf("Account Type: %s\n", temp -> accountType);
		printf("Account Status: %c\n", temp -> accountStatus);
		printf("-------------------------------------------\n");
	}
}