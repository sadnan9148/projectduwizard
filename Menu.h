void Menu_Connect()
{
	if (gameState == -2)
	{
		//homemenu
		iShowBMP(0, 0, homemenu);
		iSetColor(0, 0, 255);
		//iText(20, 560, "Press 'Enter' to continue", GLUT_BITMAP_HELVETICA_18);
	}

	if (gameState == -1)
	{
		iShowBMP(0, 0, buttonmenu);

		for (int i = 0; i < 4; i++)
		{
			iShowBMP2(bCordinate[i].x, bCordinate[i].y, button[i], 255);

		}

	}
	if (gameState == 0)
	{
		iShowBMP(0, 0, "bgmap.bmp");
		iShowBMP(50, 150, gamemenue[gameState]);

		iShowBMP2(970, 90, "back.bmp", 255);
		map(mapstate, place,placePic);
	}
	if (gameState == 1)
	{
		instructions();
		iShowBMP2(50, 700, "backs button.bmp", 255);

	}
	if (gameState == 2)
	{
		ABOUT();
		iShowBMP2(50, 700, "backs button.bmp", 255);
	}
	if (gameState == 3)
	{
		exit(0);
	}
}