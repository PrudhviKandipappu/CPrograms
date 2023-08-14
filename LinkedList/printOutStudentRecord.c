// Function To Print Out Records Data

void printOutStudentRecord()
{
	FILE *fpRecords;
	FILE *fpPrintOut;
	fpRecords = fopen("studentRecords.dat", "r");
	fpPrintOut = fopen("recordsFormatted.dat", "w");
	struct student *studentRecord;
	studentRecord = (struct student*)malloc(sizeof(struct student));
	int recordCounter = 1;
	fprintf(fpPrintOut, "--------------------------------------------------\n");
	fprintf(fpPrintOut, "%-30s%-30s%-30s%-30s%-30s\n", "StudentPinNo", "StudentName", "StudentBranch", "StudentLocation", "CollegeName");	
	fprintf(fpPrintOut, "--------------------------------------------------\n");
	while (fread(studentRecord, sizeof(struct student), 1, fpRecords)) {
		fprintf(fpPrintOut, "%-30s%-30s%-30s%-30s%-30s\n", studentRecord -> studentPinNo,
			studentRecord -> studentName, studentRecord -> studentBranch,
			studentRecord -> studentLocation, studentRecord -> collegeName);
		fprintf(fpPrintOut, "--------------------------------------------------\n");
		recordCounter++;
	}
	fclose(fpRecords);
	fclose(fpPrintOut);
	//system("notepad/p recordsFormatted.dat");
}