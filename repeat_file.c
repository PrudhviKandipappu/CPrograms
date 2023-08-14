
// Store student details into a file

#include <stdio.h>
//#define COUNT_OF_STUDENTS 3

struct student
{
	char student_name[20];
	char student_pin[20];
	char mobile_no[12];
	char location[30];
};

void store_student_details(int, struct student[], FILE*);

void main()
{
	FILE *fp_student;
	int student_counter, count_of_students;
	fp_student = fopen("Student_details.txt", "a");
	printf("How many students want to store their details: ");
	scanf("%d", &count_of_students);
	struct student student_details[count_of_students];
	for (student_counter = 0; student_counter < count_of_students; student_counter++)
	{
		store_student_details(student_counter, student_details, fp_student);
	}
	printf("YOUR DETAILS SUCESSFULLY STORED SECURLY\n");
	fclose(fp_student);
}

void store_student_details(int student_counter, struct student student_details[], FILE *fp_student)
{
	printf("Enter student %d details\n", student_counter + 1);
	fprintf(fp_student, "\tStudent %d details\n", student_counter + 1);
	printf("Enter student name: ");
	scanf("%s", student_details[student_counter].student_name);
	fprintf(fp_student, "Student Name: %s\n", student_details[student_counter].student_name);
	printf("Enter student pin number: ");
	scanf("%s", student_details[student_counter].student_pin);
	fprintf(fp_student, "Student Pin No: %s\n", student_details[student_counter].student_pin);
	printf("Enter student location: ");
	scanf("%s", student_details[student_counter].location);
	fprintf(fp_student, "Location: %s\n", student_details[student_counter].location);
	printf("Enter student mobile number: ");
	scanf("%s", student_details[student_counter].mobile_no);
	long *ptr = (long*)student_details[student_counter].mobile_no;		
	fprintf(fp_student, "Mobile no: %ld\n", *ptr);
}