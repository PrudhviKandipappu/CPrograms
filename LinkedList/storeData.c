// Function to store nodes data into a file

void storeData()
{
	FILE *fpData;
	fpData = fopen("stockRecords.dat", "w");
	struct node *temp;
	temp = head;
	while (temp != NULL) {
		fwrite(temp -> groceryItem, sizeof(struct item), 1, fpData);
		temp = temp -> next;
	}
	fclose(fpData);
}