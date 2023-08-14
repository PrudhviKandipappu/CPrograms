// Sample program to know the working process of gets()

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char text[20];
    //text = (char*)malloc(20 * sizeof(char));
    printf("Enter a text to print: ");
    //scanf("%s", text);
    gets(text);
    printf("Entered Text: %s", text);
}