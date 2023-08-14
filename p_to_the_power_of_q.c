
// p to the power of q (p^q)

#include <stdio.h>

void main()
{
	int base_value, exponent_value, counter = 1, product = 1;
	printf("Calculate p to the power of p (p ^ q)\n");
	printf("Enter base value (p): ");
	scanf("%d", &base_value);
	printf("Enter exponent value (q): ");
	scanf("%d", &exponent_value);
	while (counter <= exponent_value)
	{
		product = product * base_value;
		counter = counter + 1;
	}
	printf("%d to the power of %d is: %d", base_value, exponent_value, product);
}