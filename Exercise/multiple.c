
// You are given a positive integer N. Print "Yes" if N is a multiple of 3, otherwise print "No".

#include <stdio.h>

int main()
{
	int number;
	printf("Enter a positive integer to know it is multiple of 3 or not: ");
	scanf("%d", &number);
	if(number % 3 == 0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}