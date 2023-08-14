// Program to test output of print a structure variable using %s

#include <stdio.h>

struct item
{
	int price;
	char itemName[20];
	char itemID[10];
}item1;

void main()
{
	printf("Enter item ID: ");
	scanf("%s", item1.itemID);
	printf("Enter item name: ");
	scanf("%s", item1.itemName);
	printf("Enter the price: ");
	scanf("%d", &item1.price);
	printf("Address of the srtucture: %u\n", &item1);
	printf("Structure Variable %s\n", (char*)&item1);
	printf("Structure Variable %s\n", (char*)&item1);
	printf("Structure Variable %s\n", (char*)&item1);

}