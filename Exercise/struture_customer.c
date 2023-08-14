
// Read and display bank customer details using structure

#include <stdio.h>

struct bank_customer
{
	char bank_name[20];
	char account_number[20];
	char customer_name[20];
	char branch_name[20];
	char account_type[10];
	float balance_amount; 	
}customer1;
void main()
{
	printf("Enter your bank details to diplay\n");
	printf("Enter name of the bank: ");
	scanf("%s", customer1.bank_name);
	printf("Enter account number: ");
	scanf("%s", customer1.account_number);
	printf("Enter your name: ");
	scanf("%s", customer1.customer_name);
	printf("Enter branch name: ");
	scanf("%s", customer1.branch_name);
	printf("Enter type of your account: ");
	scanf("%s", customer1.account_type);
	printf("Enter available balance of your account: ");
	scanf("%f", &customer1.balance_amount);
	printf("*********Account Details*********\n");
	printf("Bank Name: %s\n", customer1.bank_name);
	printf("Branch Name: %s\n", customer1.branch_name);
	printf("Account Number: %s\n", customer1.account_number);
	printf("Customer Name: %s\n", customer1.customer_name);
	printf("Acount Type: %s\n", customer1.account_type);
	printf("Balance Amount: %f\n", customer1.balance_amount);
}