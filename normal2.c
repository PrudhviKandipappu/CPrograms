
// Read character using getchar()

/*#include <stdio.h>

void main()
{
	char character;
	printf("Enter a character: ");
	character = getchar();
	putchar(character);
	//printf("Character: %c", character);
	printf("%d", EOF);
}*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZEOFARRAY 5 

void main()
{
    int number, *number1, counter, counter1 = 0, count, i = 0, j, k, size = 10;
    char names[SIZEOFARRAY][10] = {"Rajesh", "Kumar", "Goutham", "Yaswanth", "Chandu"};
    int randomNumber[SIZEOFARRAY];
    srand(time(NULL));
    number = rand();
    while ((number >= 0) && (counter1 < SIZEOFARRAY))
    {
    	for (counter = 0; counter < SIZEOFARRAY; counter++)
    	{
    		if (number == randomNumber[counter] )
    		{
    			i++;
    		}
    	}
    	if (i == 0 && number < SIZEOFARRAY)
    	{
    		randomNumber[counter1] = number;
    		counter1++;
		    printf("%d\n", number);
    	}
    	number = rand();
    }
    for(counter = 0; counter < SIZEOFARRAY; counter++)  
    {  
    	int c = randomNumber[counter];
        printf("%s\n", names[c]);
    }
}