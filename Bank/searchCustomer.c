// Search a customer based on their account number and display

void searchCustomer(struct bankCustomer customer)
{
	long int accountNumber;
	printf("Enter your account number: ");
	scanf("%d", accountNumber);
	FILE *fpCustomer;
	fpCustomer = fopen(FILENAME, "r");
	while(fread(&customer, sizeof(customer), 1, fpCustomer))
	{
		if (customer.accountNumber == accountNumber)
		{
			printf("Details of %s's account\n", customer.customerName);
			printf("Account Number: %d\n", customer.accountNumber);
			printf("Account Type: %s\n", customer.accountType);
			printf("Balance Amount: %d\n", customer.balanceAmount);
			printf("Account Status: %s\n", customer.accountStatus);
			fclose(fpCustomer);
			break;
		}
	}
}