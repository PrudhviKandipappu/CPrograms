
// Convert ascii value to character (or) character to ascii value

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char value[4];
	int output;
	printf("Enter ascii value to get corresponding character\n");
	printf("                      or                        \n");
	printf("Enter character to get corresponding ascii value\n");
	printf("Enter a character (or) ascii value: ");
	scanf("%s", &value);
	char a[] = {'A'};
	output = strcmp(a, value);
	if (output < 0 )
	{
		printf("Ascii value of %s is: %d", value, (int)(*value));
	}
	if (output > 0)
	{
		printf("Character corresponding ascii value (%d) is: %c", atoi(value), atoi(value));
	}
	return 0;
}