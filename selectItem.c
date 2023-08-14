// Item to select or to sale

void selectItem()
{
	FILE *fpItem = fopen(ITEM_RECORDS, "r+");
	int sellQuantity;
	char itemID[50];
	printf("Enter id of an item: ");
	scanf("%s", itemID);
	char status[] = "STOCK NOT AVAILABLE";
	while(fread(&groceryItem, sizeof(groceryItem), 1, fpItem))
	{
		if (strcmp(groceryItem.itemID, itemID) == 0)
		{
			printf("How many items customer want to buy? ");
			scanf("%d", &sellQuantity);
			groceryItem.stockQuantity = groceryItem.stockQuantity - sellQuantity;
			groceryItem.totalStockPrice = groceryItem.stockQuantity * groceryItem.unitPrice;
			if (groceryItem.stockQuantity <= 0)
			{
				strcpy(groceryItem.stockStatus, status);
			}
			fseek(fpItem, -(sizeof(groceryItem)), SEEK_CUR);
			fwrite(&groceryItem, sizeof(groceryItem), 1, fpItem);
			fclose(fpItem);
			printf("***Thank You***\n");
			break;
		}
	}
}