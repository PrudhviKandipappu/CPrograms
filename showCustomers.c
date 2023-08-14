
// Show customer function in two ways

void show_customers(struct bank_customer customer)
{
	int choise;
	printf("Select way to show your details\n")
	printf("1 for display\n 2 for print document\n");
	scanf("%d", &choise);
	switch(choise)
	{
	case 1:
		fp_bank_customer = fopen("customer_details.dat", "r");
		while (fread(&customer, sizeof(bank_customer), 1, fp_bank_customer))
		{
			printf("Details of %s's account\n", customer.customer_name);
			printf("Account number: %s\n", customer.account_number)
			printf("Account type: %s\n", customer.account_type);
			printf("Balance: %f\n", customer.account_balance);
		}
		break;
	case 2:
		break;
	default:
		printf("Invalid choise.Please try again\n");
	}
}