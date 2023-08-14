
// Store 10,00,000 using fwrite() and fprintf() 

#include <stdio.h>

void main()
{
	int number = 1000000;
	FILE *fp_store10lacks;
	fp_store10lacks = fopen("Number.txt", "a");
	fwrite(&number, 1, sizeof(number), fp_store10lacks);
	fclose(fp_store10lacks);
	fp_store10lacks = fopen("Number2.txt", "a");
	fprintf(fp_store10lacks, "%d", number);
	fclose(fp_store10lacks);
}