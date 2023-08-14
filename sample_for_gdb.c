
// Sample program for gdb (Genaral De-Buggger)

#include <stdio.h>

void main()
{ 
	int number = 2;
	int counter = 0;
	printf("List of 20 even numbers\n");
	while (number != 0)
	{
		if (counter == 20)
		{
			printf("%d even numbers are diplayed\n", 20);
			break;
		}
		printf("Number %2d: %2d\n", counter + 1, number);
		counter++;
		number = number + 2
	}
	printf("End of program\n");
	printf("Thank You\n");
}