// Function To Search Student Record

void searchStudentRecord(struct node* match)
{
	printf("--------------------------------------------------\n");
	printf("%-30s%-30s%-30s%-30s%-30s\n", "StudentPinNo", "StudentName", "StudentBranch", "StudentLocation", "CollegeName");
	printf("--------------------------------------------------\n");
	printf("%-30s%-30s%-30s%-30s%-30s\n", match -> studentRecord -> studentPinNo,
		match -> studentRecord -> studentName, match -> studentRecord -> studentBranch,
		match -> studentRecord -> studentLocation, match -> studentRecord -> collegeName);	
	printf("--------------------------------------------------\n");
}