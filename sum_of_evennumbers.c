
// Print sum of first n even numbers

#include <stdio.h>

void main()
{
	printf("Calculate sum of first n even numbers\n");
	int count;
	printf("Enter how many even numbers you want to sum: ");
	scanf("%d", &count);
	int counter = 1 ,even_number = 2, sum_of_evennumbers = 0;	
	while (counter <= count)
	{
		sum_of_evennumbers = sum_of_evennumbers + even_number;
		even_number = even_number + 2;
		counter = counter + 1;
	}	
	printf("sum of first %d even numbers is: %d", count, sum_of_evennumbers);
}