
// Biggest of n numbers

#include <stdio.h>

void main()
{
	int count, number, biggest, counter = 1;
	printf("Calculate biggest of n numbers\n");
	printf("Enter how many you want to compare:");
	scanf("%d", &count);
	printf("Enter a number:");
	scanf("%d", &number);
	biggest = number;
	while (counter < count)
	{
		printf("Enter a number:");
		scanf("%d", &number);
		if (biggest < number)
		{
			biggest = number;
		}
		counter = counter + 1;
	}
	printf("%d is biggest number among all numbers", biggest);
}