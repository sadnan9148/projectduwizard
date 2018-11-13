void instructions()
{
	FILE *ins;


	iShowBMP(0, 0, "bgmap.bmp"); //For Background
	iSetColor(0, 0, 0);
	ins = fopen("Instructions.txt", "r");
	char str[300];
	int i = 0;
	int j = 500;
	fgets(str, 300, ins);
	while (!feof(ins))
	{
		iText(20, j, str, GLUT_BITMAP_HELVETICA_18);
		fgets(str, 300, ins);
		j = j - 20;

	}
	fclose(ins);

}