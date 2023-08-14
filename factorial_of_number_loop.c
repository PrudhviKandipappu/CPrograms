
// Print or calculate factorial of given number using a loop

#include <stdio.h>
#include <time.h>

void main()
{
	clock_t start, end;
	start = clock();
	double time_taken;
	int number, factorial_of_number = 1, temp;
	printf("Enter a number to print their factorial: ");
	scanf("%d", &number);
	temp = number;
	while (number > 0)
	{
		factorial_of_number = factorial_of_number * number;
		number--;
	}
	printf("Facorial of a %d is: %d\n", temp, factorial_of_number);
	end = clock();
	time_taken = (double)(end - start) / CLOCKS_PER_SEC;
	printf("Time taken by this program is: %f", time_taken);
}