// Function to sort registered accounts(nodes)

#include "swappingContents.c"

void sortAccounts()
{
	struct Bank *current;
	struct Bank *temp;
	struct Bank **indirect;
	int accountCounter, iteration;
	for (accountCounter = 0; accountCounter < accountsCount - 1; accountCounter++) {
		current = head;
		for (iteration = 0; iteration < accountsCount - 1; iteration++) {
			//indirect = &(*indirect) -> next;
			if (strcmp(current -> customerName, current -> next -> customerName) > 0) {
				/*temp = current -> next -> next;
				indirect = &(current -> next);
				current -> next -> next;
				current -> next = temp;*/
				swappingContents(current);
			}
			if (current -> next != NULL) {
				current = current -> next;
			}
		}
	}
	storeAccounts();
}