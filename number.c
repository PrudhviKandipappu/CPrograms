// Number increament in a file

#include <stdio.h>

void main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	FILE *fpNumber;
	/*fpNumber = fopen("incNumber.txt", "r");
	int number2;
	fread(&number, sizeof(number), 1, fpNumber);
	fclose(fpNumber);
	/*number2 = number + 1;
	printf("%d", number2);
	*/fpNumber = fopen("incNumber.txt", "w");
	fwrite(&number, sizeof(int), 1, fpNumber);
	fclose(fpNumber);
}