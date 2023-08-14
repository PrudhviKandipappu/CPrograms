// Function to find student record

struct node* findStudent()
{
	struct node* temp;
	char studentPinNo[15];
	if (head == NULL) {
		printf("No Records\n");
	}
	else {
		printf("Enter Student Pin Number: ");
		scanf("%s", studentPinNo);
		temp = head;
		while (temp != NULL) {
			if (strcmp(temp -> studentRecord -> studentPinNo, studentPinNo) == 0) {
				return temp;
			}
			temp = temp -> next;
		}
	}
	temp = NULL;
	return temp;
}