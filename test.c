// Program to authrnticate user to access a C application

#include <stdio.h>
#include <stdlib.h>

void main()
{
	if (system("python D:/Training/Python/userValidation.py") == 0) {
		// exit(0);
		printf("Hi Friends!");
	}
}
