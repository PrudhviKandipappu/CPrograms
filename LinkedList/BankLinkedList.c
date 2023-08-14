// Create a Structure Bank 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int recordsCount = 0;

struct Bank
{
	char customerName[20];
	char accountNumber[12];
	char accountType[20];
	int balanceAmount;
	char accountStatus;
	struct Bank *next;
};
struct Bank *head = NULL;

void createNewAccount();
void showAccounts();
void loadAccounts();
void storeAccounts();
struct Bank* searchRecord();
void searchAccount();
void depositAmount();
void withdrawAmount();
void closeAccount();
void updateAccount();

void main()
{
	loadAccounts();
	int option;
	do
	{
		printf("1 for CreateNewAccount\n2 for ShowAccounts\n3 for UpdateCustomerDetails\n4 for Deposit\n5 for Withdraw\n6 for SearchCustomer\n7 for CloseAccount\n8 for Exit\n");
		printf("Enter your option: ");
		scanf("%d", &option);
		switch(option)
		{
			case 1:createNewAccount();
				break;
			case 2:showAccounts();
				break;
			case 3:updateAccount();
				break;
			case 4:depositAmount();
				break;
			case 5:withdrawAmount();
				break;
			case 6:searchAccount();
				break;
			case 7:closeAccount();
				break;
			case 8:
				break;
			default:printf("Invalid choise.Please try again\n");
				break;
		}
	}
	while(option != 8);
	//storeAccounts();
}

void loadAccounts()
{

	FILE *fpAccountsData;
	fpAccountsData = fopen("accounts.dat", "r");
	struct Bank *temp;
	struct Bank *node;
	node = (struct Bank*)malloc(sizeof(struct Bank));
	while (fread(node, sizeof(struct Bank), 1, fpAccountsData))
	{
		printf("==%s\n", node -> accountNumber);
		node -> next = NULL;
		if (head == NULL)
		{
			head = node;
			printf("+");
			printf("number %s\n", head -> accountNumber);
		}
		else
		{
			printf("-\n");
			printf("number: %s\n", head -> accountNumber);
			temp = head;
			while (temp -> next != NULL)
			{
				printf("*");
				printf("--\n", temp -> accountNumber);
				temp = temp -> next;
			}
			printf("number %s\n", head -> accountNumber);
			temp -> next = node;
			printf("number %s\n", temp -> accountNumber);
			printf("number %s\n", head -> accountNumber);
		}
		node = NULL;
		node = (struct Bank*)malloc(sizeof(struct Bank));
	}
	fclose(fpAccountsData);
}

void storeAccounts()
{
	FILE *fpAccountsData;
	fpAccountsData = fopen("accounts.dat", "w");
	struct Bank *temp;
	temp = head;
	while (temp != NULL)
	{
		fwrite(temp, sizeof(struct Bank), 1, fpAccountsData);
		temp = temp -> next;
	}
	fclose(fpAccountsData);
}

void createNewAccount()
{
	struct Bank *newAccount, *temp;
	newAccount = (struct Bank*)malloc(sizeof(struct Bank));
	temp = (struct Bank*)malloc(sizeof(struct Bank));
	char *data = malloc(20);
	printf("***Welcome To Our Bank***\n");
	printf("Enter Account Number: ");
	memset(newAccount -> accountNumber, 0, sizeof(newAccount -> accountNumber));
	scanf("%s", data);
	strcpy(newAccount -> accountNumber, data);
	printf("Enter Customer Name: ");
	memset(newAccount -> customerName, 0, sizeof(newAccount -> customerName));
	scanf("%s", data);
	strcpy(newAccount -> customerName, data);
	printf("Enter Account Type: ");
	memset(newAccount -> accountType, 0, sizeof(newAccount -> accountType));
	scanf("%s", data);
	strcpy(newAccount -> accountType, data);
	int amount;
	printf("Enter Balance Amount: ");
	//memset(newAccount -> balanceAmount, 0, sizeof(newAccount -> balanceAmount));
	scanf("%d", &amount);
	newAccount -> balanceAmount = amount;
	//memset(newAccount -> accountStatus, 0, sizeof(newAccount -> accountStatus));
	newAccount -> accountStatus = 'A';
	newAccount -> next = NULL;
	if(head == NULL)
	{
		head = newAccount;
	}
	else
	{
		printf("---");
		temp = head;
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newAccount;
	}
	storeAccounts();
}

void showAccounts()
{
	struct Bank *temp;
	if(head == NULL)
	{
		printf("List is empty");
		exit(0);
	}
	else
	{
		temp = head;
		printf("Regestered Accounts\n");
		while(temp != NULL)
		{
			printf("%s's Account Details\n", temp -> customerName);
			printf("Account Number: %s\n", temp -> accountNumber);
			printf("Account Type: %s\n", temp -> accountType);
			printf("Balance Amount: %d\n", temp -> balanceAmount);
			printf("Account Status: %c\n", temp -> accountStatus);
			printf("-------------------------------------------");
			temp = temp -> next;
		}
	}
}

struct Bank* searchRecord()
{
	struct Bank *temp;
	//temp = (struct Bank*)malloc(sizeof(struct Bank));
	char accountNumber[15];
	printf("Enter Account Number: ");
	scanf("%s", accountNumber);
	temp = head;
	while (temp != NULL)
	{
		if (strcmp(temp -> accountNumber, accountNumber) == 0)
		{
			return temp;
		}
	}
	return 0;
}

void updateAccount()
{
	struct Bank *temp;
	temp = searchRecord();
	if (temp != NULL)
	{
		printf("Enter new customer name: ");
		scanf("%s",temp -> customerName);
	}
	else
	{
		printf("Invalid account number\n");
	}
}

void depositAmount()
{
	struct Bank *temp;
	temp = searchRecord();
	if (temp != NULL)
	{
		int amount;
		printf("Enter amount to deposit: ");
		printf("%d", &amount);
		temp -> balanceAmount = temp -> balanceAmount + amount;
	}
}

void withdrawAmount()
{
	struct Bank *temp;
	temp = searchRecord();
	temp = temp -> next;
	if (temp != NULL)
	{
		int amount;
		printf("Enter amount to withdraw: ");
		scanf("%d", &amount);
		temp -> balanceAmount = temp -> balanceAmount - amount;
	}
}

void searchAccount()
{
	struct Bank *temp;
	temp = searchRecord();
	temp = temp -> next;
	if (temp != NULL)
	{
		printf("%s's Account Details\n");
		printf("Account Number: %s\n", temp -> accountNumber);
		printf("Customer Name: %s\n", temp -> customerName);
		printf("Account Type: %s\n", temp -> accountType);
		printf("Balance Amount: %d\n", temp -> balanceAmount);
	}
}

void closeAccount()
{
	struct Bank *temp;
	temp = searchRecord();
	if (temp != NULL)
	{
		temp -> next = temp -> next -> next;
	}
}