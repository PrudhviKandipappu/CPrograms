// Function to load accounts details from the data file to linked list

struct Bank
{
	char customerName[20];
	char accountNumber[15];
	char accountType[20];
	int balanceAmount;
	char accountStatus;
	struct Bank *next;
}*head = NULL;  

void loadAccounts()
{
	/*struct Bank temp;
	printf("Size of structure: %d\n", sizeof(struct Bank));
	printf("Size of next: %d\n", sizeof(temp.next));*/
	FILE *fpAccounts;
	fpAccounts = fopen("accountRecords.dat", "r");
	struct Bank *temp, *newNode;
	//temp = (struct Bank*)malloc(sizeof(struct Bank));
	newNode = (struct Bank*)malloc(sizeof(struct Bank));
	while (fread(newNode, sizeof(struct Bank) - sizeof(newNode -> next), 1, fpAccounts)) {
		accountsCount++;
		printf("%d\n", accountsCount);
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
		newNode = (struct Bank*)malloc(sizeof(struct Bank));
	}
	fclose(fpAccounts);
}