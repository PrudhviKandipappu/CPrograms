// Deposit function

void depositAmount()
{
	FILE *fpCustomer;
	struct bankCustomer customer;
	fpCustomer = fopen(FILENAME, "r+");
	long int accountNumber;
	printf("Enter your account number: ");
	scanf("%d", accountNumber);
	int depositBalance;
	while(fread(&customer, sizeof(customer), 1, fpCustomer))
	{
		if(customer.accountNumber == accountNumber)
		{
			printf("Enter deposit amount: ");
			scanf("%d", &depositBalance);
			customer.balanceAmount = customer.balanceAmount + depositBalance;
			fseek(fpCustomer, -(sizeof(customer)), SEEK_CUR);
			fwrite(&customer, sizeof(customer), 1, fpCustomer);
			fclose(fpCustomer);
			printf("Deposit successfully\n");
			break;
		}
	}
}