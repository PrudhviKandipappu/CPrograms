// Function to convert a text into binary form

void printBinaryValue(char character)
{
	int binaryValue[20];
	int counter = 0, count = 0;
	while (character != 0 && counter < 7)
	{
		binaryValue[counter] = (character % 2);
		character = character / 2;
		count++;
		counter++;
		if (character == 0)
		{
			binaryValue[counter] = 0;
		}
	}
	counter = 0;
	while(counter <= count)
	{
		printf("%d", binaryValue[counter]);
		counter++;
	}
	printf(" ");
}