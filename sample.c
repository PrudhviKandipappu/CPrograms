// Program to print a file in binary format.

#include <stdio.h>

void PrintBinaryValue(int ASCII_value)
{
	int BinaryValue[8];
	int Counter = 0;
	int remainder, BinaryValueCounter = 0;
	while(ASCII_value != 0 && Counter < 7)
	{
		remainder = ASCII_value % 2;
		BinaryValue[Counter] = remainder;
		ASCII_value = ASCII_value / 2;
		Counter++;
		if (ASCII_value == 0)
		{
			BinaryValue[Counter] = 0;
		}
		Counter++;
	}
	for(BinaryValueCounter = 7; BinaryValueCounter >= 0; BinaryValueCounter--)
	{
		printf("%d", BinaryValue[BinaryValueCounter]);
	}
	printf(" ");
}

void main()
{
	char FileName[50];
	char FileData;
	printf("Enter the name of the file to open it in the binary format: ");
	scanf("%s", FileName);
	int AsciiValue, CharacterCounter = 0;
	FILE *FPbinaryfile = fopen(FileName, "rb");
	while(fread(&FileData, sizeof(FileData), 1, FPbinaryfile) > 0)
	{
		if(CharacterCounter % 15 == 0)
		{
			printf("\n");
		}
		AsciiValue = (int)FileData;
		PrintBinaryValue(AsciiValue);
		CharacterCounter++;
	}
	fclose(FPbinaryfile);
}