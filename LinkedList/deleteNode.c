// Function to delete a node(record)

void deleteNode(struct node *match)
{
	struct node **indirect;
	indirect = &head;
	struct node *temp;
	temp = head;
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
	storeData();
	printf("Record Deleted\n");
}