// Function to show all records data

void showData()
{
	struct node *temp;
	if (head == NULL) {
		printf("No Records Found\n");
	}
	else {
		temp = head;
		printf("--------------------------------------------------------------------\n");
		printf("|%s\t|%s\t|%s\t|%s|\n", "Item ID", "Item Name", "Unit Price", "Quantity");
		printf("--------------------------------------------------------------------\n");
		while (temp != NULL) {
			printf("|%s\t\t|%s\t\t|%d\t\t|%d|\n", temp -> groceryItem -> itemID, temp -> groceryItem -> itemName, temp -> groceryItem -> itemQty, temp -> groceryItem -> itemPrice);
			/*printf("-----------------------------------------\n");
			printf("***%s's Properties***\n", temp -> groceryItem -> itemName);
			printf("Item ID: %s\n", temp -> groceryItem -> itemID);
			printf("Quantity: %d\n", temp -> groceryItem -> itemQty);
			printf("UnitPrice: %d\n", temp -> groceryItem -> itemPrice);
			printf("-----------------------------------------\n");*/
			temp = temp -> next;
		}
		printf("--------------------------------------------------------------------\n");
	}
}