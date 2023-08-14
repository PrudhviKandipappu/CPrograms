// Function to update one of the record property

void updateNode(struct node *current)
{
	int qty;
	printf("How many you want to add? ");
	scanf("%d", &qty);
	current -> groceryItem -> itemQty = current -> groceryItem -> itemQty + qty;
	printf("Record Updated\n");
	storeData();
}