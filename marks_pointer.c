
// Read and print n marks

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int count, marks_index, *marks;
	printf("Enter subject marks for store\n");
	printf("Enter how many marks you want to store: ");
	scanf("%d", &count);
	marks = malloc(count * sizeof(int));
	for (marks_index = 0; marks_index < count; marks_index++)
	{
		printf("Enter subject %d marks: ", marks_index + 1);
		scanf("%d", &marks[marks_index]);
	}
	printf("Subject marks\n");
	for (marks_index = 0; marks_index < count; marks_index++)
	{
		printf("Subject %d marks: %d\n", marks_index + 1, marks[marks_index]);
	}
	return 0;
}