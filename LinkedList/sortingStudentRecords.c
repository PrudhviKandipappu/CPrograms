// Sorting The Student Records

void sortingStudentRecords()
{
	struct node *temp, *nextNode;
	struct student *tempStudent;
	if (head != NULL) {
		temp = head;
		while (temp -> next!= NULL) {
			nextNode = temp -> next;
			while (nextNode -> next!= NULL) {
				if (strcmp(temp -> studentRecord -> studentPinNo, nextNode -> studentRecord -> studentPinNo) > 0) {
					tempStudent = temp -> studentRecord;
					temp -> studentRecord = nextNode -> studentRecord;
					nextNode -> studentRecord = tempStudent;
				}
				nextNode = nextNode -> next;
			}
			temp = temp -> next;
		}
	}
	else {
		printf("Record Not Found\n");
	}
	storeList();
}