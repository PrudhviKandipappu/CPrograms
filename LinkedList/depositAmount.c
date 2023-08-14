// Function to deposit the amount

void depositAmount()
{
	struct Bank *temp;
	int amount;
	temp = searchRecord();
	if (temp != NULL) {
		printf("Enter amount to deposit: ");
		scanf("%d", &amount);
		amount = amount + temp -> balanceAmount;
		temp -> balanceAmount = amount;
	}
	storeAccounts();
}