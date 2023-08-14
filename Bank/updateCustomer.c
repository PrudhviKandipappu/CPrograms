// Update customer name

void updateCustomer()
{
	FILE *fpCustomer;
	struct bankCustomer customer;
	fpCustomer = fopen(FILENAME, "r+");
	long int accountNumber;
	printf("Enter your account number: ");
	scanf("%d", accountNumber);
	while(fread(&customer, sizeof(customer), 1, fpCustomer))
	{
		if (customer.accountNumber == accountNumber)
		{
			printf("Enter new name: ");
			scanf("%s", customer.customerName);
			customer.customerName[strlen(customer.customerName) - 1] = '\0';
			fseek(fpCustomer, -(sizeof(customer)), SEEK_CUR);
			fwrite(&customer, sizeof(customer), 1, fpCustomer);
			fclose(fpCustomer);
			break;	
		}
	}
}