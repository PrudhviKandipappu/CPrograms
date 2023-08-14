
// Read and print n marks 

#include <stdio.h>

void main()
{
	int marks[20];
	char choise = 'y';
	int marks_counter = 0, counter = 0, count_of_marks;
	printf("Enter n marks to print\n");
	while (choise == 'y')
	{
		printf("Enter marks: ");
		scanf("%d", &marks[marks_counter]);
		printf("Do you want to enter more marks[Y/N]: ");
		scanf("%s", &choise);
		marks_counter = marks_counter + 1;
		counter++;
	}
	count_of_marks = counter;
	for (marks_counter = 0; marks_counter < count_of_marks; marks_counter++)
	{
		printf("Subject %d marks:%d\n", marks_counter + 1, marks[marks_counter]);
	}

}