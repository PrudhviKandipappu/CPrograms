// Function to convert a text into binary form

void printBinaryValue(int ascciValue)
{
	int binaryValue[20];
	int counter = 0, count = 0;
	while (ascciValue != 0 && counter <= 7)
	{
		binaryValue[counter] = (ascciValue % 2);
		ascciValue = ascciValue / 2;
		count++;
		counter++;
		if (ascciValue == 0)
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