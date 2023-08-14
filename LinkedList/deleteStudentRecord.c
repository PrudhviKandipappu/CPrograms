// Function To Delete a Student Record

void deleteStudentRecord(struct node* match)
{
	struct node **indirect;
	struct node *temp;
	temp = head;
	indirect = &head;
	int flag;
	while (*indirect != match && temp -> next != NULL) {
		indirect = &(*indirect) -> next;
		temp = temp -> next;
		if (*indirect == match) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		*indirect = (*indirect) -> next;
		free(match);
	}
	storeList();
}