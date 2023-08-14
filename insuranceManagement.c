// Main method to insurance management

#include <stdio.h>
#include <string.h>
#define POLICY_RECORDS "insurancePolicyRecords.txt"
#include "generateUniqueId.c"
#include "addPolicy.c"
#include "updatePolicy.c"
#include "showPolicies.c"
#include "searchPolicy.c"
#include "closePolicy.c"

void main()
{
	int option;
	char choise[5], character = 1;
	do
	{
		printf("***Welcome to MS Insurance Policy***\n");
		printf("1 - Add New Policy\n2 - Update a Policy\n3 - Search a Policy\n4 - Show Policies\n5 - Close a Policy\n");
		printf("Enter your option: ");
		scanf("%d", &option);
		switch(option)
		{
		case 1:addNewPolicy();
			break;
		case 2:updatePolicy();
			break;
		case 3:searchPolicy();
			break;
		case 4:showPolicies();
			break;
		case 5:closePolicy();
			break;
		default:printf("Invalid option.Please try again\n");
		}	
		printf("Enter you choise to continue / leave (yes/no): ");
		scanf("%s", choise);
	}
	while (strcmp(choise, "yes") == 0);
	printf("%cTHANK YOU%c\n", character, character);
}