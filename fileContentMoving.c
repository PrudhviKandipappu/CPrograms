// Swap the file content

#include <stdio.h>

void main()
{
	int number, counter = 0;
	FILE *fpNumber;
	fpNumber = fopen("sampleNumber.txt", "r+");
	int deletedNumber = 4;
	while (fread(&number, sizeof(int), 1, fpNumber))
	{
		if (number == deletedNumber)
		{
			fseek(fpNumber, -(sizeof(int)), SEEK_CUR);
			while (fread(&number, sizeof(int), 1, fpNumber))
			{
				fseek(fpNumber, -(sizeof(int)), SEEK_CUR);
				fwrite(&number, sizeof(int), 1, fpNumber);
				fseek(fpNumber, 2 * sizeof(int), SEEK_CUR);
			}

		}
	}
	fclose(fpNumber);
}