// Function To Store List Of Data Into a File

void storeList()
{
	struct node *temp;
	temp = head;
	FILE *fpRecords;
	fpRecords = fopen("studentRecords.dat", "w");
	while (temp != NULL) {
		fwrite(temp -> studentRecord, sizeof(struct student), 1, fpRecords);
		temp = temp -> next;
	}
	fclose(fpRecords);
}