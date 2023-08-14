// Display all registered policies

void showPolicies()
{
	struct insurance policy;
	char counter = 49;
	FILE *fpPolicy;
	fpPolicy = fopen(POLICY_RECORDS, "r");
	while (fread(&policy, sizeof(policy), 1, fpPolicy))
	{
		printf("Policy Record %c\n", counter);
		printf("------------------------------------------\n");
		printf("Policy Id: %d\n", policy.policyId);
		printf("Policy Name: %s\n", policy.policyDiscription);
		printf("Policy Holder name: %s\n", policy.policyHolderName);
		printf("Monthly Premium amount: %d\n", policy.premium);
		printf("Policy Status: %s\n", policy.policyStatus);
		printf("------------------------------------------\n");
		counter++;
	}
	fclose(fpPolicy);
}