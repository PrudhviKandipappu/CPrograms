
// Read a name and save it into file

#include <stdio.h>

void main()
{
	char name[20], separator = '\n';
	int count_of_names, name_counter;
	FILE *fp_names;
	printf("Enter a name to store into a file\n");
	printf("Enter how many name you want to store: ");
	scanf("%d", &count_of_names);
	fp_names = fopen("name.txt", "a");
	for (name_counter = 0; name_counter < count_of_names; name_counter++)
	{
		printf("Enter a name: ");
		scanf("%s", name);
		fputs(name, fp_names);
		fputc(separator, fp_names);
	}
	fclose(fp_names);
}