// Function to create a new account

void createNewAccount()
{
	struct Bank *temp, *newAccount;
	newAccount = (struct Bank*)malloc(sizeof(struct Bank));
	//char accountData[20];
	//int amount;
	printf("Enter your account number: ");
	memset(newAccount -> accountNumber, 0, sizeof(newAccount -> accountNumber));
	scanf("%s", newAccount -> accountNumber);
	printf("Enter customer name: ");
	memset(newAccount -> customerName, 0, sizeof(newAccount -> customerName));
	scanf("%s", newAccount -> customerName);
	printf("Enter account type: ");
	memset(newAccount -> accountType, 0, sizeof(newAccount -> accountType));
	scanf("%s", newAccount -> accountType);
	printf("Enter balance amount: ");
	scanf("%d", &newAccount -> balanceAmount);
	newAccount -> accountStatus = 'A';
	newAccount -> next = NULL;
	temp = head;
	if (head == NULL) {
		head = newAccount;
	}
	else {
		while (temp -> next != NULL) {
			temp = temp -> next;
		}
		temp -> next = newAccount;
	}
	accountsCount++;
	storeAccounts();
}