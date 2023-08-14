// Funtion to load nodes data from a data file

struct item
{
	char itemID[10];
	char itemName[20];
	int itemQty;
	int itemPrice;
};

struct node
{
	struct item *groceryItem;
	struct node *next;
}*head = NULL;

int count = 0;

void loadData()
{
	FILE *fpData;
	fpData = fopen("stockRecords.dat", "r");
	struct node *newNode, *temp;
	struct item *groceryItem;
	groceryItem = (struct item*)malloc(sizeof(struct item));
	//printf("Size of groceryItem: %d\n", sizeof(struct item));
	//newNode -> groceryItem = (struct item*)malloc(sizeof(struct item));
	while (fread(groceryItem, sizeof(struct item), 1, fpData)) {
		printf("%s\n", groceryItem -> itemName);
		newNode = (struct node*)malloc(sizeof(struct node));
		newNode -> groceryItem = groceryItem;
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
	newNode = NULL;
	//groceryItem = NULL;
	groceryItem = (struct item*)malloc(sizeof(struct item));
	count++;
	}
	fclose(fpData);
}
