// Program to bank application

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILENAME "customerDetails.dat"
#include "openNewAccount.c"
#include "updateCustomer.c"
#include "depositAmount.c"
#include "showCustomers.c"
#include "withdrawAmount.c"
#include "searchCustomer.c"
#include "closeAccount.c"

void main()
{
	int option;
	struct bankCustomer customer;
	char *choice = (char*)malloc(3 * sizeof(char));
	do
	{
		printf("1 for OpenNewAccount\n2 for ShowCustomers\n3 for UpdateCustomerDetails\n4 for Deposit\n5 for Withdraw\n6 for SearchCustomer\n7 for CloseAccount\n");
		printf("Select your option from above list: \n");
		scanf("%d", &option);
		switch(option)
		{
			case 1:openNewAccount(customer);
					break;
			case 2:showCustomers();
					break;
			case 3:updateCustomer();
					break;
			case 4:depositAmount();
					break;
			case 5:withdrawAmount();
					break;
			case 6:searchCustomer(customer);
					break;
			case 7:closeAccount(customer);
					break;
			default: 
				printf("Invalid choice.Please try again\n");
		}
		printf("Enter your choice to continue(yes/no): ");
		scanf("%s", choice);
	}
	while (strcmp(choice, "yes") == 0);
}