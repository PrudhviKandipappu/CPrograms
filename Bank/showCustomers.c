// Show customer function in two ways

void showCustomers()
{
	int choise;
	struct bankCustomer customer;
	printf("Select your way to show your details\n");
	printf("1 for display\n2 for print document\n");
	scanf("%d", &choise);
	FILE *fpCustomer;
	fpCustomer = fopen(FILENAME, "r");
	char data[30];
	switch(choise)
	{
	case 1:
		while (fread(&customer, sizeof(customer), 1, fpCustomer))
		{
			printf("--------------------------------------------------\n");
			printf("***Details of %s's account***\n", customer.customerName);
			printf("Account Number: %d\n", customer.accountNumber);
			printf("Account Type: %s\n", customer.accountType);
			printf("Account Balance: %d\n", customer.balanceAmount);
			printf("Account Status: %s\n", customer.accountStatus);
			printf("--------------------------------------------------\n");
		}
		break;
	case 2:
		sscanf(data, "notepad/p %s", FILENAME);
		system(data);
		break;
	default:
		printf("Invalid choise.Please try again\n");
	}
	fclose(fpCustomer);
	fclose(fpCustomer);
}