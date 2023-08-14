
// Function of stringcopy() for copying a string

void stringcopy(char *copied_name, char *source_name)
{
	int index_counter = 0;
	while (source_name[index_counter] != '\0')
	{
		copied_name[index_counter] = source_name[index_counter];
		index_counter++;
	}
	copied_name[index_counter] = '\0';
}