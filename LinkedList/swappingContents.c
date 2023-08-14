// Function to swap accounts

void swappingContents(struct Bank *temp)
{
	char temporaryName[20];
	char temporaryAcno[15];
	char temporaryActype[20];
	char temporaryAcstatus;
	int temporaryBalance;
	strcpy(temporaryName, temp -> customerName);
	strcpy(temporaryAcno, temp -> accountNumber);
	strcpy(temporaryActype, temp -> accountType); 
	temporaryAcstatus = temp -> accountStatus;
	temporaryBalance = temp -> balanceAmount;
	strcpy(temp -> customerName, temp -> next -> customerName);
	strcpy(temp -> accountNumber, temp -> next -> accountNumber);
	temp -> accountStatus = temp -> next -> accountStatus;
	strcpy(temp -> accountType, temp -> next -> accountType);
	temp -> balanceAmount = temp -> next -> balanceAmount;
	strcpy(temp -> next -> customerName, temporaryName);
	strcpy(temp -> next -> accountNumber, temporaryAcno);
	temp -> next -> accountStatus = temporaryAcstatus;
	strcpy(temp -> next -> accountType, temporaryActype);
	temp -> next -> balanceAmount = temporaryBalance;
}