// Read pixels as bytes

#include <stdio.h>

void main()
{
	FILE *fpPixels;
	fpPixels = fopen("repeat.bmp", "r");
	char character;
	while (!feof(fpPixels))
	{
		character = fgetc(fpPixels);
		printf("c: %c ", character);
		printf("d: %d ", character);
	}
	fclose(fpPixels);
}