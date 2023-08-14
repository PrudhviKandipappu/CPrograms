// Function to show menu

void showMenu()
{
	FILE *fpMenu;
	fpMenu = fopen(MENU, "r");
	char menuData[20];
	while (fgets(menuData, sizeof(menuData), fpMenu)) {
		printf("%s", menuData);
	}
	fclose(fpMenu);
}