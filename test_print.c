
// Dummy Main

#include <stdio.h>

void main()
{
	int count;
	printf("How many numbers you want to display? ");
	scanf("%d", &count);
	print(count);
}

void print(int number)
{
	if (number >= 1)
	{
		number--;
		print(number);
		printf("%d ", number + 1);
	}
}