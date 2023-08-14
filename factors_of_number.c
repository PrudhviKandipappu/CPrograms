
// Find the factors of given number

int factors_count(int number)
{
	int count, counter = 1;
	while (counter <= number)
	{
		if(number % counter == 0)
		{
			count++;
		}
		counter++;
	}
	return count;
}