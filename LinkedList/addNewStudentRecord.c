// Function to add new student Record

void addNewStudentRecord()
{
	struct node *newStudent = NULL, *temp;
	newStudent = (struct node*)malloc(sizeof(struct node));
	newStudent -> studentRecord = (struct student*)malloc(sizeof(struct student));
	printf("Enter Student Pin Number: ");
	scanf("%s", newStudent -> studentRecord -> studentPinNo);
	printf("Enter Student Name: ");
	scanf("%s", newStudent -> studentRecord -> studentName);
	printf("Enter Student Branch: ");
	scanf("%s", newStudent -> studentRecord -> studentBranch);
	printf("%s\n", newStudent -> studentRecord -> studentBranch);
	//memset(newStudent -> studentRecord -> studentBranch, 0, sizeof(newStudent -> studentRecord -> studentBranch));
	//newStudent -> studentRecord -> studentBranch[strlen(newStudent -> studentRecord -> studentBranch)] = '\0';
	printf("Enter Student Location: ");
	scanf("%s", newStudent -> studentRecord -> studentLocation);
	printf("Enter College Name: ");
	scanf("%s", newStudent -> studentRecord -> collegeName);
	printf("%s\n", newStudent -> studentRecord -> studentBranch);
	newStudent -> next = NULL;
	if (head == NULL) {
		head = newStudent;
	}
	else {
		temp = head;
		while (temp -> next != NULL) {
			temp = temp -> next;
		}
		temp -> next = newStudent;
	}
	storeList();
}