// Swap the file content

#include <stdio.h>

void main()
{
	int number, counter = 0;
	FILE *fpNumber;
	fpNumber = fopen("sampleNumber.txt", "w");
	while (counter <= 5)
	{
		printf("Enter a number: ");
		scanf("%d", &number);
		fwrite(&number, sizeof(number), 1, fpNumber);
		counter++;
	}
	fclose(fpNumber);
}