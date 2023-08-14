
// Read a number and store into the file

#include <stdio.h>

void main()
{
	int number;
	FILE *fp_number;
	printf("Enter a number to store: ");
	scanf("%d", &number);
	fp_number = fopen("ascii_name.txt", "a");
	fwrite(&number, sizeof(number), 1, fp_number);
	fclose(fp_number);
	fp_number = fopen("ascii_name.txt", "r");
	fread(&number, sizeof(number), 1, fp_number);
	printf("%d", number);
}