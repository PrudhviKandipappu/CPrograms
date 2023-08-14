
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "loadFieldsAndCount.c"

extern char **fieldsList;
extern int fieldsCount;

void main()
{
	int counter = 0;
	setFieldsCount();
	printf("Count of fields: %d", fieldsCount);
	while (counter < fieldsCount) {
		printf("%s\n", fieldsList[counter]);
		counter++;
	}
}