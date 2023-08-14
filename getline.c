
// Read no.of character from user

#include <stdio.h>

int getline(char [], int);

void main()
{
	char to_array[20];
	getline(to_array, 20);
	printf("Text: %s", to_array);
}
int getline(char to_array[20], int lim)
{
	printf("Enter a text to print: ");
	int counter;
	char character;
	for (counter = 0; counter < lim && (character = getchar()) != '\n' && character != '\0' && character != EOF; counter++)
	{
		to_array[counter] = character;
	}
	if (character == '\n')
	{
		to_array[counter] = '\0';
	}
	return counter;
}