// Program to know wokring process of ternary operator

#include <stdio.h>

void main()
{
	int number;
	printf("Enter a number to know it is even or not: ");
	scanf("%d", &number);
	// Method 1 : Using ternary operator
	(number % 2 == 0) ? printf("%d is an even number", number) : printf("%d is not an even number", number);
	// Method 2 : Using normal ifelse statements
	/*
	if (number % 2 == 0)
	{
		printf("%d is an even number", number);
	}
	else
	{
		printf("%d is not an even number", number);
	}
	*/	
	// Method 3: Using single line ifelse statement
	// if (number % 2 == 0) printf("%d is an even number", number); else printf("%d is not an even number", number);
}