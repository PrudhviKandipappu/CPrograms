
// Read numbers from user and print average when user enter '0'(zero) as input

#include <stdio.h>

void main()
{
	int number, counter = 0, sum = 0, average;
	printf("Enter numbers to calculate their average and press 0 when you want average\n");
	printf("Enter a number: ");
	scanf("%d", &number);
	while (number != 0)
	{
		counter ++;
		sum = sum + number;
		printf("Enter a number: ");
		scanf("%d", &number);
	}
	average = sum / counter;
	printf("Average of %d numbers is:%d", counter, average);
}