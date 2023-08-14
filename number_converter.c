
// Print given number in the form of characters

#include <stdio.h>
#define COUNT 10

void main()
{
	int number, counter = 0, last_digit, digit_counter = 0;
	int digits[COUNT], values[COUNT];
	printf("Enter a number to get it in the form of characters(ex:6566 -> AB\n");
	printf("Enter a number: "); 
	scanf("%d", &number);
	while (number != 0)
	{
		last_digit = number % 10;
		digits[counter] = last_digit;
		number = number / 10;
		counter++;
	}
	for (counter = counter -1; counter > -1; counter--)
	{
		printf("%d\n", digits[counter]);
		values[digit_counter] = digits[counter];
		printf("---%d\n", values[digit_counter]);
		digit_counter++;
	}
	printf("=%d", *values);
}