// Print A to Z without an integer value

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char alphabet = 'A';
	printf("List of alphabets\n");
	while (alphabet <= 90)
	{
		printf("%c\n", alphabet);
		alphabet++;
	}
	return 0;
}