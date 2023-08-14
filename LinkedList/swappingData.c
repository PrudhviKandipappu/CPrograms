// Function to swap data without swapping nodes

void swappingData(struct node *current)
{
	char itemID[10];
	char itemName[20];
	int qty;
	int price;
	strcpy(itemID, current -> groceryItem -> itemID);
	strcpy(current -> groceryItem -> itemID, current -> next -> groceryItem -> itemID);
	strcpy(current -> next -> groceryItem -> itemID, itemID);
	strcpy(itemName, current -> groceryItem -> itemName);
	strcpy(current -> groceryItem -> itemName, current -> next -> groceryItem -> itemName);
	strcpy(current -> next -> groceryItem -> itemName, itemName);
	qty = current -> groceryItem -> itemQty;
	current -> groceryItem -> itemQty = current -> next -> groceryItem -> itemQty;
	current -> next -> groceryItem -> itemQty = qty;
	price = current -> groceryItem -> itemPrice;
	current -> groceryItem -> itemPrice = current -> next -> groceryItem -> itemPrice;
	current -> next -> groceryItem -> itemPrice = qty;
}