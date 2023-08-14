// To provied unique Id to Item

int generateUniqueId()
{
	int itemId;
	FILE *fpItem;
	fpItem = fopen("number.txt", "r");
	fread(&itemId, sizeof(int), 1, fpItem);
	fclose(fpItem);
	itemId++;
	fpItem = fopen("number.txt", "w");
	fwrite(&itemId, sizeof(int), 1, fpItem);
	fclose(fpItem);
	return itemId;
}