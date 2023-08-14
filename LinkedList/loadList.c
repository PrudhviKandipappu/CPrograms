// Function to load list of data  from a file

struct student
{
	char studentPinNo[15];
	char studentName[20];
	char studentBranch[3];
	char studentLocation[30];
	char collegeName[40];
};

struct node
{
	struct student *studentRecord;
	struct node *next;
}*head = NULL;

void loadList()
{
	FILE *fpStudent;
	fpStudent = fopen("studentRecords.dat", "r");
	struct node *newNode, *temp;
	struct student *newRecord;
	newRecord = (struct student*)malloc(sizeof(struct student));
	while (fread(newRecord, sizeof(struct student), 1, fpStudent)) {
		newNode = (struct node*)malloc(sizeof(struct node));
		newNode -> studentRecord = newRecord;
		newNode -> next = NULL;
		if (head == NULL) {
			head = newNode;
		}
		else {
			temp = head;
			while (temp -> next != NULL) {
				temp = temp -> next;
			}
			temp -> next = newNode;
			newRecord = (struct student*)malloc(sizeof(struct student));
		}
	}
	fclose(fpStudent);
}