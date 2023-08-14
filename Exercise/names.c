// Read 5 names and print using array

#include <stdio.h>
#include <string.h>

void main()
{
        char person_names[50], name[10];
        int count_of_persons = 5, counter = 0;
        int index_counter = 0, last_index = 0, name_index = 0;
        printf("Enter 5 persons names for store and print\n");
        while (counter < count_of_persons)
        {
                printf("Enter a name: ");
                scanf("%s", &name);
                for (index_counter = last_index; index_counter < strlen(name); index_counter++)
                {
                        person_names[index_counter] = name[name_index];
                        name_index++;
                }
                last_index = index_counter + 1;
                person_names[index_counter] = ',';
                counter++;
        }
        last_index = 0;
        for (index_counter = 0; index_counter < strlen(person_names); index_counter++)
        {
                printf("Person %d: ", index_counter);
                for (name_index = last_index; person_names[name_index] != ','; name_index++)
                {
                        printf("%c", person_names[name_index]);
                }
                last_index = name_index + 1;
        }
}