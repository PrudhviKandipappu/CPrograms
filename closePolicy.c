// Close registerd policy

void closePolicy()
{
	struct insurance policy;
	int policyId;
	FILE *fpPolicy;
	FILE *fpClosePolicy;
	FILE *fpTemp;
	fpTemp = fopen("temperaryData.txt", "a");
	fpClosePolicy = fopen("closedRecords.txt", "a");
	fpPolicy = fopen(POLICY_RECORDS, "r+");
	printf("Enter policy id: ");
	scanf("%d", &policyId);
	while (fread(&policy, sizeof(policy), 1, fpPolicy))
	{
		if (policy.policyId == policyId)
		{
			strcpy(policy.policyStatus, "CLOSED");
			fwrite(&policy, sizeof(policy), 1, fpClosePolicy);
		}
		else
		{
			fwrite(&policy, sizeof(policy), 1, fpTemp);
		}
	}
	fclose(fpClosePolicy);
	fclose(fpTemp);
	fclose(fpPolicy);
	remove(POLICY_RECORDS);
	rename("temperaryData.txt", POLICY_RECORDS);
	//remove("temperaryData.txt");
}
