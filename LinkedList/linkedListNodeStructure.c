// Doing experiment on linked list with two structures

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "loadData.c"
#include "search.c"
#include "storeData.c"
#include "createNewNode.c"
#include "updateNode.c"
#include "searchNode.c"
#include "showNodes.c"
#include "deleteNode.c"
#include "sortingNodes.c"


void main()
{
	loadData();
	int option;
	do
	{
		printf("1.AddNewItem\n2.ShowStock\n3.UpdateStock\n4.SearchItem\n5.DeleteStock\n6.Sorting\n7.Exit\n");
		printf("Enter your option: ");
		scanf("%d", &option);
		switch(option)
		{
			case 1:createNewNode();
				break;
			case 2:showData();
				break;
			case 3:updateNode(search());
				break;
			case 4:searchNode(search());
				break;
			case 5:deleteNode(search());
				break;
			case 6:sortingNodes();
				break;
			case 7:
				break;
			default:printf("Invalid choise.Please try again\n");
				break;
		}
	}
	while(option != 7);
}