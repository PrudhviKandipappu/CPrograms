
// Copy an element any pass into another element

#include <stdio.h>

void main()
{
	int number1, number2;
	printf("Enter a number: ");
	scanf("%d", &number1);
	number2 = number1;
	printf("Number 1 is: %d and Number 2 is: %d\n", number1, number2);
	printf("Address of number1 is: %u", &number1);
}