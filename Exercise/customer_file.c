
// Read and store bank customer details in file using fwrite()

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct bank_customer
{
	char bank_name[20];
	char account_number[20];
	char customer_name[20];
	char branch_name[20];
	char account_type[10];
	float balance_amount; 	
};

void main()
{
	FILE *fp_customer_write, *fp_customer_read;
	int count_of_customers, customer_counter;
	struct bank_customer *customers, *details;
	printf("Enter your bank details to diplay\n");
	printf("Enter how many customers you want to store their details: ");
	scanf("%d", &count_of_customers);
	customers = (struct bank_customer*)calloc(count_of_customers, sizeof(struct bank_customer));
	details = (struct bank_customer*)calloc(count_of_customers, sizeof(struct bank_customer));
	fp_customer_write = fopen("customer_details.txt", "w");
	for (customer_counter = 0; customer_counter < count_of_customers; customer_counter++)
	{
		printf("*********Customer %d*********\n", customer_counter + 1);
		printf("Enter name of the bank: ");
		scanf("%s", customers[customer_counter].bank_name);
		printf("Enter account number: ");
		scanf("%s", customers[customer_counter].account_number);
		printf("Enter your name: ");
		scanf("%s", customers[customer_counter].customer_name);
		printf("Enter branch name: ");
		scanf("%s", customers[customer_counter].branch_name);
		printf("Enter type of your account: ");
		scanf("%s", customers[customer_counter].account_type);
		printf("Enter available balance of your account: ");
		scanf("%f", &customers[customer_counter].balance_amount);
	}
	fwrite(customers, sizeof(struct bank_customer), count_of_customers, fp_customer_write);
	fclose(fp_customer_write);
	fp_customer_read = fopen("customer_details.txt", "r");
	fread(details, sizeof(struct bank_customer), count_of_customers, fp_customer_read);
	for (customer_counter = 0; customer_counter < count_of_customers; customer_counter++)
	{
		printf("*********Customer %d details*********\n", customer_counter + 1);
		printf("Bank Name :%s\n", details[customer_counter].bank_name);
		printf("Account number: %s\n", details[customer_counter].account_number);
		printf("Customer Name: %s\n", details[customer_counter].customer_name);
		printf("Branch Name: %s\n", details[customer_counter].branch_name);
		printf("Account type: %s\n", details[customer_counter].account_type);
		printf("Available Balance: %f\n", details[customer_counter].balance_amount);
	}
	fclose(fp_customer_read);
}