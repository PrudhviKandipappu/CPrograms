// Function to create a new node

void createNewNode()
{
	count++;
	struct node *newNode, *temp;
	newNode = (struct node*)malloc(sizeof(struct node));
	newNode -> groceryItem = (struct item*)malloc(sizeof(struct item));
	printf("Enter the item ID: ");
	scanf("%s", newNode -> groceryItem -> itemID);
	printf("%s\n", newNode -> groceryItem -> itemID);
	printf("Enter item name: ");
	scanf("%s", newNode -> groceryItem -> itemName);
	printf("Enter unit price: ");
	scanf("%d", &newNode -> groceryItem -> itemPrice);
	printf("Enter quantity: ");
	scanf("%d", &newNode -> groceryItem -> itemQty);
	newNode -> next = NULL;
	if (head == NULL) {
		head = newNode;
	}
	else {
		temp = head;
		while (temp -> next != NULL) {
			temp = temp -> next;
		}
		temp -> next = newNode;
	}
	storeData();
}