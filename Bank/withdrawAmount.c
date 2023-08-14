// Withdraw given amount from specified account

void withdrawAmount()
{
	FILE *fpCustomer;
	struct bankCustomer customer;
	fpCustomer = fopen(FILENAME, "r+");
	long int accountNumber;
	printf("Enter your account number: ");
	scanf("%d", accountNumber);
	int withdrawalAmount;
	while(fread(&customer, sizeof(customer), 1, fpCustomer))
	{
		if(customer.accountNumber == accountNumber)
		{
			printf("Enter withdrawal amount: ");
			scanf("%d", &withdrawalAmount);
			customer.balanceAmount = customer.balanceAmount - withdrawalAmount;
			fseek(fpCustomer, -(sizeof(customer)), SEEK_CUR);
			fwrite(&customer, sizeof(customer), 1, fpCustomer);
			fclose(fpCustomer);
			printf("Withdraw successfullt completed\n");
			break;
		}
	}
}