// Update customer name of a specified account

//#include "searchRecord.c"

void updateAccount()
{
	struct Bank *temp;
	temp = searchRecord();
	if (temp != NULL)
	{
		printf("Enter new customer name: ");
		scanf("%s", temp -> customerName);
	}
	else
	{
		printf("Record not found\n");
	}
	storeAccounts();
}