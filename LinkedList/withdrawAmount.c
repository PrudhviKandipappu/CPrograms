// Function to withdraw the amount

void withdrawAmount()
{
	struct Bank *temp;
	int amount;
	temp = searchRecord();
	if (temp != NULL) {
		printf("Enter amount to withdraw: ");
		scanf("%d", &amount);
		temp -> balanceAmount = temp -> balanceAmount - amount;
	}
	storeAccounts();
}