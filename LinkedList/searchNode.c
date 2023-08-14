// Function to search a record(item)

void searchNode(struct node *current)
{
	if (current == NULL) {
		printf("Record Not Found\n");
	}
	else {
		printf("---------------------------------------\n");
		printf("***%s's Properties***\n", current -> groceryItem -> itemName);
		printf("ItemID: %s\n", current -> groceryItem -> itemID);
		printf("Item Price: %d\n", current -> groceryItem -> itemPrice);
		printf("Quantity: %d\n", current -> groceryItem -> itemQty);
		printf("---------------------------------------\n");
	}
}