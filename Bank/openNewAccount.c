// Open new customer bank account

struct bankCustomer
{
	char customerName[20];
	long int accountNumber;
	char accountType[20];
	int balanceAmount;
	char accountStatus[20];
};

long int getAccountNumber()
{
	FILE *fpAccountNumber;
	fpAccountNumber = fopen("accountNumber.dat", "r+");
	long int accountNumber;
	fread(&accountNumber, sizeof(long int), 1, fpAccountNumber);
	accountNumber++;
	fwrite(&accountNumber, sizeof(long int), 1, fpAccountNumber);
	fclose(fpAccountNumber);
	return accountNumber;
}

void openNewAccount(struct bankCustomer customer)
{
	FILE *fpCustomer;
	memset(customer.customerName, '\0', sizeof(customer.customerName));
	printf("Welcome to PRK Bank\n");
	printf("Please fill below columns to open new account\n");
	printf("Enter Your Name: ");
	scanf("%s", customer.customerName);
	printf("Enter Account Type: ");
	memset(customer.accountType, '\0', sizeof(customer.accountType));
	scanf("%s", customer.accountType);
	printf("Enter Balance Amount: ");
	// memset(customer.balanceAmount, '\0', sizeof(customer.balanceAmount));
	customer.balanceAmount = '\0';
	scanf("%d", &customer.balanceAmount);
	memset(customer.accountStatus, '\0', sizeof(customer.accountStatus));
	strcpy(customer.accountStatus, "Active\0");
	// memset(customer.accountNumber, '\0', sizeof(customer.accountNumber));
	customer.accountNumber = '\0';
	customer.accountNumber = getAccountNumber();
	printf("Your Account Number is: %lo\n", customer.accountNumber);
	printf("Please remember your account number\n");
	printf("Your Account is successfully opened, Thanks You!\n");
	fpCustomer = fopen(FILENAME, "a");
	fwrite(&customer,  sizeof(customer), 1, fpCustomer);
	fclose(fpCustomer);
}
