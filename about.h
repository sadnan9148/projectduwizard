void ABOUT()
{
	FILE *about;
	iShowBMP(0, 0, "bgmap.bmp"); //For Background
	iSetColor(0, 0, 0);
	about = fopen("ABOUT.txt", "r");
	char str[300];
	int i = 0;
	int j = 500;
	fgets(str, 300, about);
	while (!feof(about))
	{
		iText(20, j, str, GLUT_BITMAP_HELVETICA_18);
		fgets(str, 300, about);
		j = j - 20;

	}
	fclose(about);
}