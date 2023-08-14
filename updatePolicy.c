// Update policy details

void updatePolicy()
{
	struct insurance policy;
	//char holderNewName[20];
	int policyId;
	printf("Enter policy id: ");
	scanf("%d", &policyId);
	FILE *fpPolicy;
	fpPolicy = fopen(POLICY_RECORDS, "r+");
	while (fread(&policy, sizeof(policy), 1, fpPolicy))
	{
		if (policy.policyId == policyId)
		{
			printf("Enter new name: ");
			scanf("%s", policy.policyHolderName);
			fseek(fpPolicy, -(sizeof(policy)), SEEK_CUR);
			fwrite(&policy, sizeof(policy), 1, fpPolicy);
			fclose(fpPolicy);
			printf("Policy Details updated successfully\n");
			break;
		}
	}
}