
// Splitting a text or string into several tokens by using strtok()

#include <stdio.h>
#include <string.h>

void main()
{
	char text[50] = "Prudhvi,Rama Manikanta Pavan";
	char *token;
	token = strtok(text, ",a");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
}