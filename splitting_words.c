
// Spliting a text into seperate several tokens by one delimiter using strtok()

#include <stdio.h>
#include <time.h>

void main()
{
	time_t start, end;
	start = time(NULL);
	char string[30] = "Prudhvi-Rama-Manikanta";
	char *token;
	token = strtok(string, "-");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, "-");
	}
	end = time(NULL);
	printf("%lo", ((long)end - (long)start));
}