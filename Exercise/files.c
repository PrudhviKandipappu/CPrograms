
// Store data in to a file and read that from file

#include <stdio.h>

void main()
{
	FILE *fp_store;
	char name[30];
	int number;
	fp_store = fopen("store.doc", "a");
	fprintf(fp_store, "%s\n", "\nWelcome to gcc\n Try to improve your skills");
	fclose(fp_store);
	fp_store = fopen("store.doc", "r");
	while (fscanf(fp_store, "%s", name)!= EOF)
	{
	printf("%s", name);
	fscanf(fp_store, "%s", name);
	printf("%s", name);
	}
}
