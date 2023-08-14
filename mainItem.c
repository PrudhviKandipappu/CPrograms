// Main module of item structure

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ITEM_RECORDS "itemStockRecords.txt"
#include "entryStock.c"
#include "getItemId.c"
#include "updateStock.c"
#include "showTotalStock.c"
#include "searchItem.c"
#include "selectItem.c"

void main()
{
	int option; 
	char character = 1, *choice = malloc(5);
	do
	{
		printf("***WELCOME TO MKP SUPER MARKET***\n");
		printf("1 - Stock Entry\n2 - Show Total Stock Of Items\n3 - Update stock items\n4 - Search an Item Properties\n5 - Sell an Item\n");
		printf("Enter your option from above list: ");
		scanf("%d", &option);
		switch(option)
		{
		case 1:addItem();
			break;
		case 2:showTotalStock();
			break;
		case 3:updateStock();
			break;
		case 4:searchItem();
			break;
		case 5:selectItem();
			break;
		default:printf("Invalid option. Please try again\n");
			break;
		}
		printf("Enter your choice to continue or exit (yes/no): ");
		scanf("%s", choice);
	}
	while (strcmp(choice, "yes") == 0);
	printf("%cThanks for your visit%c\n", character, character);
}