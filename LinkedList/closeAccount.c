// Function to close a record in a linked list

void closeAccount(struct Bank *match)
{
	struct Bank **indirect;
	if (match != NULL) {
		indirect = &head;
		while (*indirect != match) {
			indirect = &(*indirect) -> next;
		}
		*indirect = (*indirect) -> next;
		free(match);
	}
	else {
		printf("Record not found\n");
	}
	storeAccounts();
}