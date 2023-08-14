
// Sum of two numbers using function 

#include <stdio.h>

void main()
{
	int number1, number2, sum_of_numbers;
	printf("Enter two number to get their sum\n");
	printf("Enter a number: ");
	scanf("%d", &number1);
	printf("Enter another number: ");
	scanf("%d", &number2);
	sum_of_numbers = sum(number1, number2);
	printf("Sum of %d and %d is: %d", number1, number2, sum_of_numbers);
}
int sum(int number1, int number2)
{
	return (number1 + number2);
}