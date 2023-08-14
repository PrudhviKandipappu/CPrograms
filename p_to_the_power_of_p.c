
// p to the power of p (p^p)

#include <stdio.h>

void main()
{
	int number, counter = 1, product = 1;
	printf("Calculater p to the power of p (p ^ p)\n");
	printf("Enter a number to get their power (p): ");
	scanf("%d", &number);
	while (counter <= number)
	{
		product = product * number;
		counter = counter + 1;
	}
	printf("%d to the power of %d is: %d", number, number, product);
}