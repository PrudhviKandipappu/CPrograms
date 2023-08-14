// Close customers account permanent

void closeAccount(struct bankCustomer customer)
{
	long int accountNumber;
	FILE *fpCustomer;
	fpCustomer = fopen(FILENAME, "r+");
	printf("Enter your account number: ");
	scanf("%d", accountNumber);
	while(fread(&customer, sizeof(customer), 1, fpCustomer))
	{
		if(accountNumber == customer.accountNumber)
		{
			strcpy(customer.accountStatus, "Closed\0");
			fwrite(&customer, sizeof(customer), 1, fpCustomer);
			fclose(fpCustomer);
			break;	
		}
	}
}