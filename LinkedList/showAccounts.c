// Function to show registered account details

void showAccounts()
{
	struct Bank *temp;
	temp = head;
	if (temp == NULL)
	{
		printf("No Regcords Found\n");
	}
	else
	{
		while (temp != NULL) {
			printf("%s's Account Deatails\n", temp -> customerName);
			printf("Account Number: %s\n", temp -> accountNumber);
			printf("Account Type: %s\n", temp -> accountType);
			printf("Balance Amount: %d\n", temp -> balanceAmount);
			printf("Account Status: %c\n", temp -> accountStatus);
			printf("-------------------------------------------\n");
			temp = temp -> next;
		}
	}
}