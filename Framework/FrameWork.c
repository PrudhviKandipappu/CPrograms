// Create a frame work using c

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "avoidNewLine.c"
#define MENU "Menu.cfg"
#define FIELDS "Fields.cfg"
#define FRAMEWORKDATA "Framework.dat"
#define ENTER "Please Enter"
#include "updateRecord.c"
#include "createRecord.c"

extern FILE *fpData;
extern int fieldCounter;
extern char data[20];
extern char fwData[20];

#include "showMenu.c"
#include "showRecords.c"
#include "searchRecord.c"
#include "closeRecord.c"
#include "countOfFields.c"


int main()
{
	setFieldsCount();
	printf("Fields Count: %d\n", fieldsCount);
	int option;
	char choise;
	do {
		showMenu();
		scanf("%d", &option);
		printf("\n");
		switch (option)	{
			case 1:
				createRecord();
				break;
			case 2:
				showRecords();
				break;
			case 3:
				updateRecord();
				break;
			case 4:
				closeRecord();
				break;
			case 5:
				searchRecord();
				break;
			case 6:
				return 0;
				break;
			default:
				printf("Invalid Option, please try again\n");
				break;
		}
	}
	while(option != 6);
	return 0;
}