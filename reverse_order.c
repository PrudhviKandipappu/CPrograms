
// Print n to 1 using a single variable

#include <stdio.h>

void main()
{
	int count;
	printf("Print numbers in reverse order from n to 1\n");
	printf("How many numbers you want to display in reverse order? ");
	scanf("%d", &count);
	printf("Numbers from %d to 1\n", count);
	while (count > 0)
	{
		printf("%d ", count);
		count = count - 1;
	}
}