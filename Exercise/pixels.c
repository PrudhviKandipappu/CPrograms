// Read the pixels as character

#include <stdio.h>

void main()
{
	FILE *fpPixels;
	fpPixels = fopen("Image.bmp", "r");
	char character;
	while (!feof(fpPixels)) {
		character = fgetc(fpPixels);
		printf("Chracter: %c ", character);
	}
	fclose(fpPixels);
}