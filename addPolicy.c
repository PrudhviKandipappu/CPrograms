// Add a new policy details

struct insurance
{
	int policyId;
	char policyHolderName[20];
	int premium;
	char policyDiscription[50];
	char policyStatus[20];
};

void addNewPolicy()
{
	struct insurance policy;
	printf("Enter policy name: ");
	scanf("%s", policy.policyDiscription);
	printf("Enter policy holder name: ");
	scanf("%s", policy.policyHolderName);
	printf("Enter monthly premium amount: ");
	scanf("%d", &policy.premium);
	policy.policyId = generateUniqueId();
	FILE *fpPolicy;
	fpPolicy = fopen(POLICY_RECORDS, "a");
	strcpy(policy.policyStatus, "ACTIVE");
	fwrite(&policy, sizeof(policy), 1, fpPolicy);
	fclose(fpPolicy);
	printf("***Policy Successfully Registered***\n");
}