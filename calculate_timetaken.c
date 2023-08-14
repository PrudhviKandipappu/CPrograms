
// Calculate time taken by a program

#include <stdio.h>
#include <time.h>

void main()
{
	clock_t start, end;
	start = clock();
	int number1, number2;
	long time_taken;
	printf("Enter two number to sum\n");
	printf("Enter first number: ");
	scanf("%d", &number1);
	printf("Enter another number: ");
	scanf("%d", &number2);
	int sum = number1 + number2;
	printf("Sum of %d and %d is: %d\n", number1, number2, sum);
	end = clock();
	time_taken = (long)(end - start);
	printf("Time taken by this program is: %lo", time_taken);
}