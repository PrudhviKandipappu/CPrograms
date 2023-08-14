
// Read and print 5 marks

#include <stdio.h>
#define COUNT 5

void main()
{
	int marks[COUNT], marks_counter;
	printf("Enter %d marks to store\n", COUNT);
	for (marks_counter = 0; marks_counter < COUNT; marks_counter++)
	{
		printf("Enter marks: ");
		scanf("%d", &marks[marks_counter]);
	} 
	printf("Subject Marks\n");
	for (marks_counter = 0; marks_counter < COUNT; marks_counter++)
	{
		printf("Subject %d marks: %d\n", marks_counter + 1, marks[marks_counter]);
	}
}