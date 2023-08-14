
// Print factorial of a given number using recursion

#include <stdio.h>
#include <time.h>

void main()
{
	clock_t start, end;
	double time_taken;
	start = clock();
	int number, product = 1;
	printf("Enter a number to find their factoral: ");
	scanf("%d", &number);
	product = factorial(number, product);
	printf("Factorial of %d is: %d\n", number, product);
	end = clock();
	time_taken = (double)(end - start) / CLOCKS_PER_SEC;
	printf("Time taken by this program is: %.3f", time_taken);
}

int factorial(int number, int product)
{
	if(number > 0)
	{
		product = number * factorial(number - 1, product);
	}
	return product;
}