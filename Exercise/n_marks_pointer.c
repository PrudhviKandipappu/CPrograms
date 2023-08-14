
// Read and print n marks with pointer

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *marks, count, marks_counter;
	printf("Enter how many marks you want to store: ");
	scanf("%d", &count);
	marks = calloc(count, sizeof(int));
	for (marks_counter = 0; marks_counter < count; marks_counter ++)
	{
		printf("Enter Subject %d marks: ", marks_counter + 1);
		scanf("%d", &marks[marks_counter]);
	}
	printf("***Marks of the different subject***\n");
	for (marks_counter = 0; marks_counter < count; marks_counter++)
	{
		printf("Subject %d marks: %d\n", marks_counter + 1, marks[marks_counter]);
	}
}