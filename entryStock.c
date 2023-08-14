// Store stock of items into their records

struct item
{
	char itemID[50];
	char itemDescription[50];
	int unitPrice;
	int stockQuantity;
	int totalStockPrice;
	char stockStatus[20];
}groceryItem;

int addItem()
{
	char itemDescription[50];
	int stockQuantity;
	FILE *fpItem;
	fpItem = fopen(ITEM_RECORDS, "a+");
	printf("Enter following details to store the stock of items\n");
	printf("Enter item ID: ");
	scanf("%s", groceryItem.itemID);
	printf("Enter Description of an item: ");
	scanf("%s", itemDescription);
	printf("Enter Unit Price of an Item: ");
	scanf("%d", &groceryItem.unitPrice);
	printf("Enter quantity of the stock: ");
	scanf("%d", &groceryItem.stockQuantity);
	strcpy(groceryItem.itemDescription, itemDescription);
	groceryItem.totalStockPrice = groceryItem.unitPrice * groceryItem.stockQuantity;
	//groceryItem.itemID = getitemID();
	strcpy(groceryItem.stockStatus, "STOCK AVAILABLE");
	//printf("Your %s's Item Id is: %s\n", groceryItem.itemDescription, groceryItem.itemID);
	printf("Total price of current stock is: %d\n", groceryItem.totalStockPrice);
	fwrite(&groceryItem, sizeof(groceryItem), 1, fpItem);
	printf("Stock is successfully registered\n***Thank You***\n");
	fclose(fpItem);
	return 0;
}