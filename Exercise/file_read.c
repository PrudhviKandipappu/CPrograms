
// Read all names from a file

#include <stdio.h>

void main()
{
	char name;
	FILE *fp_names;
	int name_counter = 1;
	printf("Read all names from a file\n");
	fp_names = fopen("name.txt", "r");
	printf("Person %d is: ", name_counter);
	do
	{
		name = fgetc(fp_names);
		if (name == '\n')
		{
			printf("%c", name);
			name_counter = name_counter + 1;
			
			printf("\nPerson %d is: ", name_counter);
		}
		else
		{
			printf("%c", name);
		}
	} 
	while(name != EOF);
	fclose(fp_names);
}