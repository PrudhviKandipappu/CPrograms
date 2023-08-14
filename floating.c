
// Print fahrenheat - celsius table for fahr = 0,20,...300; floating point version

#include <stdio.h>

void main()
{
	int lower, upper, step;
	float fahr, celsius;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	printf("Fahrenheat\tcelsius\n");
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32);
		printf("%.0f\t\t%5.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
}