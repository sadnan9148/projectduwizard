int mapmatching(int mapstate, int gameState, int mx, int my) // To Match The Place According To Value Of mapstate
{

	if (mx >= 735 + 50 && mx <= 772 + 50 && my >= 278 && my <= 291 && gameState == 0)
	{
		mapstate = 0;
	}
	if (mx >= 778 && mx <= 806 && my >= 210 && my <= 233 && gameState == 0)
	{
		mapstate = 1;
	}
	if (mx >= 798 + 50 && mx <= 826 + 50 && my >= 227 && my <= 250 && gameState == 0)
	{
		mapstate = 2;
	}
	if (mx >= 855 + 50 && mx <= 888 + 50 && my >= 219 && my <= 244 && gameState == 0)
	{
		mapstate = 3;
	}

	if (mx >= 765 + 50 && mx <= 800 + 50 && my >= 175 && my <= 185 && gameState == 0)
	{
		mapstate = 4;
	}
	if (mx >= 641 + 50 && mx <= 695 + 50 && my >= 193 && my <= 254 && gameState == 0)
	{
		mapstate = 5;
	}
	if (mx >= 665 + 50 && mx <= 692 + 50 && my >= 266 && my <= 292 && gameState == 0)
	{
		mapstate = 6;
	}
	if (mx >= 588 + 50 && mx <= 610 + 50 && my >= 299 && my <= 319 && gameState == 0)
	{
		mapstate = 7;
	}
	if (mx >= 616 + 50 && mx <= 638 + 50 && my >= 301 && my <= 327 && gameState == 0)
	{
		mapstate = 8;
	}
	if (mx >= 647 + 50 && mx <= 663 + 50 && my >= 314 && my <= 333 && gameState == 0)
	{
		mapstate = 9;
	}
	if (mx >= 552 + 50 && mx <= 564 + 50 && my >= 598 + 150 - 309 && my <= 598 + 150 - 302 && gameState == 0)
	{
		mapstate = 10;
	}
	if (mx >= 557 + 50 && mx <= 573 + 50 && my >= 326 && my <= 340 && gameState == 0)
	{
		mapstate = 11;
	}
	if (mx >= 543 + 50 && mx <= 563 + 50 && my >= 598 + 150 - 451 && my <= 598 + 150 - 440 && gameState == 0)
	{
		mapstate = 12;
	}
	if (mx >= 574 + 50 && mx <= 605 + 50 && my >= 363 && my <= 410 && gameState == 0)
	{
		mapstate = 13;
	}
	if (mx >= 523 + 50 && mx <= 544 + 50 && my >= 434 && my <= 451 && gameState == 0)
	{
		mapstate = 14;
	}
	if (mx >= 465 + 50 && mx <= 492 + 50 && my >= 598 + 150 - 443 && my <= 598 + 150 - 428 && gameState == 0)
	{
		mapstate = 15;
	}
	if (mx >= 311 + 50 && mx <= 363 + 50 && my >= 598 + 150 - 411 && my <= 598 + 150 - 360 && gameState == 0)
	{
		mapstate = 16;
	}
	if (mx >= 230 + 50 && mx <= 283 + 50 && my >= 598 + 150 - 321 && my <= 598 + 150 - 301 && gameState == 0)
	{
		mapstate = 17;
	}
	if (mx >= 446 + 50 && mx <= 462 + 50 && my >= 598 + 150 - 201 && my <= 598 + 150 - 191 && gameState == 0)
	{
		mapstate = 18;
	}
	if (mx >= 391 + 50 && mx <= 436 + 50 && my >= 544 && my <= 569 && gameState == 0)
	{
		mapstate = 19;
	}
	if (mx >= 379 + 50 && mx <= 452 + 50 && my >= 573 && my <= 607 && gameState == 0)
	{
		mapstate = 20;
	}
	if (mx >= 457 + 50 && mx <= 475 + 50 && my >= 560 && my <= 573 && gameState == 0)
	{
		mapstate = 21;
	}
	if (mx >= 372 + 50 && mx <= 419 + 50 && my >= 623 && my <= 643 && gameState == 0)
	{
		mapstate = 22;
	}
	if (mx >= 253 + 50 && mx <= 290 + 50 && my >= 559 && my <= 598 && gameState == 0)
	{
		mapstate = 23;
	}
	if (mx >= 307 + 50 && mx <= 352 + 50 && my >= 619 && my <= 646 && gameState == 0)
	{
		mapstate = 24;
	}
	if (mx >= 320 + 50 && mx <= 355 + 50 && my >= 657 && my <= 679 && gameState == 0)
	{
		mapstate = 25;
	}
	if (mx >= 486 + 50 && mx <= 508 + 50 && my >= 610 && my <= 622 && gameState == 0)
	{
		mapstate = 26;
	}

	return mapstate;


}
void mapDes(int mapstate, char place[][100], char placePic[][100])
{
	FILE *fp;
	iShowBMP(0, 0, "bgmap.bmp");
	iShowBMP(500, 550, placePic[mapstate]);
	iSetColor(0, 0, 0);
	iShowBMP(50, 700, "backs button.bmp");
	fp = fopen(place[mapstate], "r");
	char str[300];
	int i = 0;
	int j = 500;
	fgets(str, 300, fp);
	while (!feof(fp))
	{
		iText(20, j, str, GLUT_BITMAP_HELVETICA_18);
		fgets(str, 300, fp);
		j = j - 20;

	}
	fclose(fp);

}
void map(int mapstate, char place[][100], char placePic[][100]) // To Show The Place Details
{

	if (mapstate == 0)
	{

		mapDes(mapstate, place, placePic);

	}
	if (mapstate == 1)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 2)
	{
		mapDes(mapstate, place, placePic);

	}
	if (mapstate == 3)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 4)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 5)
	{
		mapDes(mapstate, place, placePic);

	}
	if (mapstate == 6)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 7)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 8)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 9)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 10)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 11)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 12)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 13)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 14)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 15)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 16)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 17)
	{
		mapDes(mapstate, place, placePic);

	}
	if (mapstate == 18)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 19)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 20)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 21)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 22)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 23)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 24)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 25)
	{
		mapDes(mapstate, place, placePic);
	}
	if (mapstate == 26)
	{
		mapDes(mapstate, place, placePic);
	}




}