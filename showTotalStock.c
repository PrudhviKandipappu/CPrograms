// Checking available stock

void showTotalStock()
{
	char itemCounter = 49;
	FILE *fpItem = fopen(ITEM_RECORDS, "r");
	printf("***TOTAL STOCK OF ITEMS***\n");
	while (fread(&groceryItem, sizeof(groceryItem), 1, fpItem))
	{
		printf("Stock Item %c\n", itemCounter);
		printf("----------------------------------\n");
		printf("Item Id: %s\n", groceryItem.itemID);
		printf("Item Discription: %s\n", groceryItem.itemDescription);
		printf("Unit Price: %d\n", groceryItem.unitPrice);
		printf("Stock  Status: %s\n", groceryItem.stockStatus);
		printf("Stock Quantity: %d\n", groceryItem.stockQuantity);
		printf("Stock Total Price: %d\n", groceryItem.totalStockPrice);
		printf("----------------------------------\n");
		itemCounter++;
	}
	fclose(fpItem);
}