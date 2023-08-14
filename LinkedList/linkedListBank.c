// Make the Bank Application using linked list 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int accountsCount = 0;

#include "loadAccounts.c"
#include "searchRecord.c"
#include "storeAccounts.c"
#include "searchAccount.c"
#include "updateAccount.c"
#include "depositAmount.c"
#include "withdrawAmount.c"
#include "sortAccounts.c"
#include "createNewAccount.c"
#include "showAccounts.c"
#include "closeAccount.c"
#include "printOutData.c"

void main()
{
	loadAccounts();
	int option;
	do
	{
		printf("1.CreateNewAccount\n2.ShowAccounts\n3.UpdateCustomerDetails\n4.Deposit\n5.Withdraw\n6.SearchCustomer\n7.CloseAccount\n8.sort\n9.Print Out\n10.Exit\n");
		printf("Enter your option: ");
		scanf("%d", &option);
		switch(option)
		{
			case 1:createNewAccount();
				break;
			case 2:showAccounts();
				break;
			case 3:updateAccount();
				break;
			case 4:depositAmount();
				break;
			case 5:withdrawAmount();
				break;
			case 6:searchAccount();
				break;
			case 7:closeAccount(searchRecord());
				break;
			case 8:
				sortAccounts();
				break;
			case 9:
				 printOutData();
				break;
			case 10:
				break;
			default:printf("Invalid choise.Please try again\n");
				break;
		}
	}
	while(option != 10);
}