// Function To Show All Student Records

void showAllStudentRecords()
{
	struct node *current;
	if (head == NULL) {
		printf("No Records\n");
	}
	else {
		current = head;
		printf("--------------------------------------------------\n");
		printf("%-30s%-30s%-30s%-30s%-30s\n", "StudentPinNo", "StudentName", "StudentBranch", "StudentLocation", "CollegeName");
		printf("--------------------------------------------------\n");
		while (current != NULL) {
			printf("%-30s%-30s%-30s%-30s%-30s\n", current -> studentRecord -> studentPinNo,
			current -> studentRecord -> studentName, current -> studentRecord -> studentBranch,
			current -> studentRecord -> studentLocation, current -> studentRecord -> collegeName);	
			printf("--------------------------------------------------\n");
			current = current -> next;
		}
	}
}