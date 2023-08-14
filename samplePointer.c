// Print addresses of a pointers

#include <stdio.h>

void main()
{
	int *ptrInt;
	int *ptrChar;
	printf("%u\n", ptrInt);
	printf("%u\n", ptrChar);
	ptrInt++;
	ptrChar++;
	printf("%u\n", ptrInt);
	printf("%u\n", ptrChar);
}