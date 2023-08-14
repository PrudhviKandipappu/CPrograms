// Program for making students details management by using linked list

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "loadList.c"
#include "storeList.c"
#include "findStudent.c"
#include "addNewStudentRecord.c"
#include "updateStudentRecord.c"
#include "showAllStudentRecords.c"
#include "searchStudentRecord.c"
#include "sortingStudentRecords.c"
#include "deleteStudentRecord.c"
#include "printOutStudentRecord.c"

void main()
{
	loadList();
	int option;
	do {
		printf("************************\n");
		printf("1.Add New Student Record\n");
		printf("2.Update Student Record\n");
		printf("3.Delete Student Record\n");
		printf("4.Search Student\n");
		printf("5.Show All Records\n");
		printf("6.Sorting Records\n");
		printf("7.Print Out Records\n");
		printf("8.Exit\n");
		printf("Enter Your Choise: ");
		scanf("%d", &option);
		switch (option) {
			case 1:addNewStudentRecord();
				break;
			case 2:updateStudentRecord(findStudent());
				break;
			case 3:deleteStudentRecord(findStudent());
				break;
			case 4:searchStudentRecord(findStudent());
				break;
			case 5:showAllStudentRecords();
				break;
			case 6:sortingStudentRecords();
				break;
			case 7:printOutStudentRecord();
				break;
			case 8:
				break;
			default:printf("Invalid Choise. Please Try Again!\n");
		}
	}
	while (option != 8);
}