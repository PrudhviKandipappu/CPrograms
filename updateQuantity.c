// Update stock quantity

void updateStockQuantity(struct item groceryItem)
{
	printf("Enter quantity of the stock: ");
	scanf("%d", &stockQuantity);
	groceryItem.stockQuantity = groceryItem.stockQuantity + stockQuantity;
	groceryItem.totalStockPrice = groceryItem.unitPrice * groceryItem.stockQuantity;
	fseek(fpItem, -(sizeof(groceryItem), SEEK_CUR));
	fwrite(&groceryItem, sizeof(groceryItem), 1, fpItem);
}