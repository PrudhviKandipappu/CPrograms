// Search a policy

void searchPolicy()
{
	struct insurance policy;
	int policyId;
	printf("Enter policy id: ");
	scanf("%d", &policyId);
	FILE *fpPolicy;
	fpPolicy = fopen(POLICY_RECORDS, "r");
	while (fread(&policy, sizeof(policy), 1, fpPolicy))
	{
		if (policy.policyId == policyId)
		{
			printf("------------------------------------------\n");
			printf("Policy Id: %d\n", policy.policyId);
			printf("Policy Name: %s\n", policy.policyDiscription);
			printf("Policy Holder name: %s\n", policy.policyHolderName);
			printf("Monthly Premium amount: %d\n", policy.premium);
			printf("Policy Status: %s\n", policy.policyStatus);
			printf("------------------------------------------\n");
			break;
		}
	}
	fclose(fpPolicy);
}