// Function to search specifed record

struct node* search()
{
	char itemID[10];
	struct node *temp;
	if (head == NULL) {
		printf("No Records\n");
	}
	else {
		printf("Enter item ID: ");
		scanf("%s", itemID);
		temp = head;
		while (temp != NULL) {
			if (strcmp(temp -> groceryItem -> itemID, itemID) == 0) {
				return temp;
			}
			temp = temp -> next;
		}
	}
	temp = NULL;
	return temp;
}