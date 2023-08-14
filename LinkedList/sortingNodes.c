// Function to sorting the nodes

#include "swappingData.c"

void sortingNodes()
{
	if (head == NULL) {
		printf("No records to sort\n");
	}
	else {
		int recordCounter, iteration;
		struct node *current;
		printf("Count: %d\n", count);
		for (recordCounter = 0; recordCounter < count - 1; recordCounter++) {
			current = head;
			for (iteration = 0; iteration < count - 1; iteration++) {
				if (strcmp(current -> groceryItem -> itemID, current -> next -> groceryItem -> itemID) > 0) {
					swappingData(current);
				}
				current = current -> next;
			}
		}
	}
	storeData();
}