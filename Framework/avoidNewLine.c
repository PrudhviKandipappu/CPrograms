// Function to avoid new line

char* avoidNewLine(char *string)
{
	string[strlen(string) - 1] = '\0';
	return string;
}