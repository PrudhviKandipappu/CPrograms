// Function To Update Specified Student Record

void updateStudentRecord(struct node* match)
{
	char studentLocation[30];
	printf("Enter New Location of Student: ");
	scanf("%s", studentLocation);
	strcpy(match -> studentRecord -> studentLocation, studentLocation);
	storeList();
}