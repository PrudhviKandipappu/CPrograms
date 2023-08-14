// Read n names and print

 

#include <stdio.h>

#include <stdlib.h>

#define NAME_SIZE 20

 

void main()

{

      char *names;

      int count;

      printf("How many names you want to display? ");

      scanf("%d", &count);

      names = (char*)malloc(count * NAME_SIZE);

      int name_counter = 0;

      long addres = (long)names;

      while (name_counter < count)

      {

           printf("Enter a name: ");

           scanf("%s", names);

           names = names + NAME_SIZE;

           name_counter++;

      }

      names = addres;

      name_counter = 0;

      printf("List of names\n");

      while (name_counter < count)

      {

           printf("Name %d is: %s\n", name_counter + 1, names);

           names = names + 20;

           name_counter++;

      }

}