// Update stock quantity

void updateStock()
{
	FILE *fpItem;
	int stockQuantity;
	char itemID[50];
	fpItem = fopen(ITEM_RECORDS, "r+");
	printf("Enter item id: ");
	scanf("%s", itemID);
	while(fread(&groceryItem, sizeof(groceryItem), 1, fpItem))
	{
		if (strcmp(groceryItem.itemID, itemID) == 0)
		{
			printf("Enter quantity of the stock: ");
			scanf("%d", &stockQuantity);
			groceryItem.stockQuantity = groceryItem.stockQuantity + stockQuantity;
			groceryItem.totalStockPrice = groceryItem.unitPrice * groceryItem.stockQuantity;
			fseek(fpItem, -(sizeof(groceryItem)), SEEK_CUR);
			fwrite(&groceryItem, sizeof(groceryItem), 1, fpItem);
			fclose(fpItem);
			break;
		}
	}
}