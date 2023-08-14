
// Square root of a number

#include <stdio.h>
#include <math.h>

void main()
{

	int number, square_root;
	printf("Calculate square root of given number\n");
	printf("Enter a number: ");
	scanf("%d", &number);
	square_root = sqrt(number);
	printf("%d is the square root of %d ", square_root, number);

}