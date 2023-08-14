// Store stock of items into their records

struct item
{
	int itemId;
	char itemDiscription[50];
	int unitPrice;
	int stockQuantity;
	int totalStockPrice;
	char stockStatus[20];
};

int stockEntry()
{
	struct item groceryItem;
	char itemDiscription[50];
	int stockQuantity;
	FILE *fpItem;
	fpItem = fopen(ITEM_RECORDS, "a+");
	printf("Enter following details to store the stock of items\n");
	printf("Enter Discription of an item: ");
	scanf("%s", itemDiscription);
	printf("Enter Unit Price of an Item: ");
	scanf("%d", &groceryItem.unitPrice);
	printf("Enter quantity of the stock: ");
	scanf("%d", &groceryItem.stockQuantity);
	strcpy(groceryItem.itemDiscription, itemDiscription);
	groceryItem.totalStockPrice = groceryItem.unitPrice * groceryItem.stockQuantity;
	groceryItem.itemId = getItemId();
	strcpy(groceryItem.stockStatus, "STOCK AVAILABLE");
	printf("Your %s's Item Id is: %d\n", groceryItem.itemDiscription, groceryItem.itemId);
	printf("Total price of current stock is: %d\n", groceryItem.totalStockPrice);
	fwrite(&groceryItem, sizeof(groceryItem), 1, fpItem);
	printf("Stock is successfully registered\n***Thank You***\n");
	fclose(fpItem);
	return 0;
}