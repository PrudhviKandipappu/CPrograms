
// Print 5 hardcoded names using 2D array

#include <stdio.h>
#define COUNT_OF_NAMES 5
#define LENGTH_OF_NAME 20

void main()
{
	int returnValue;
	returnValue = system("python D:/Training/Python/userValidation.py");
	printf("%d", returnValue);
	if (returnValue == 0) {
		char names[COUNT_OF_NAMES][LENGTH_OF_NAME] = {
			"Prudhvi", "Manikanta", "Shiva", "Ram", "Krishna"
		};
		int name_counter;
		for (name_counter = 0; name_counter < COUNT_OF_NAMES; name_counter++) {
			printf("Name %d: %s\n", name_counter + 1, names[name_counter]);
		}
	}
	else{
		printf("Invalid");
	}
}