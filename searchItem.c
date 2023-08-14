// Search an item properties

void searchItem()
{
	FILE *fpItem;
	fpItem = fopen(ITEM_RECORDS, "r");
	char itemID[50];
	printf("Enter Id of an Item: ");
	scanf("%s", itemID);
	while (fread(&groceryItem, sizeof(groceryItem), 1, fpItem))
	{
		if (!strcmp(groceryItem.itemID, itemID))
		{
			printf("Item Id: %s\n", groceryItem.itemID);
			printf("Item Description: %s\n", groceryItem.itemDescription);
			printf("Unit Price: %d\n", groceryItem.unitPrice);
			printf("Stock Status: %s\n", groceryItem.stockStatus);
			printf("Stock Quantity: %d\n", groceryItem.stockQuantity);
			printf("Stock Total Price: %d\n", groceryItem.totalStockPrice);
			printf("----------------------------------\n");
			break;
		}
	}
	fclose(fpItem);
}