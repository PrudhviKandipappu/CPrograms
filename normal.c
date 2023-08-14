
#include <stdio.h>

// if we uncomment the below line, then the program will print AGE in the output.
// #define AGE 18

int main()
{
	// if `AGE` is defined then print the `AGE` else print "Not Defined"
	int AGE = 10;
	#ifdef AGE
		printf("Age is %d", AGE);
	#else
		printf("Not Defined");
	#endif

	return 0;
}

