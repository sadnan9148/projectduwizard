#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "iGraphics.h"
#include "explore.h" //For map manipulation
#include"about.h"// About the project
#include"instructions.h" // For Instruction
#include "Variables.h"
#include "Menu.h"
#include "POP.h"

#define ScreenWidth 1200
#define ScreenHieght 800
#define xAxismarginhigh 1100
#define xAxismarginlow 100

//gameState = 0 Map Menu
//gameState = 1 Instructions
//gameState = 2 About
//gameState = 3 Exit



void iDraw()
{
	iClear();

	Menu_Connect();

	if (inGame == 0)
	{
		gameState = -1;
		inGame = -1;
	}
	if (mapin == 0)
	{
		gameState = -1;
		mapin = -1;
	}
	if (mapback == 0)
	{
		gameState = 0;
		mapback = -1;
		mapstate = -1;
	}


	if (gameState == 1 || gameState == 2)
	{
		if (flag == 1)
		{
			iShowBMP(50, 700, "backs button3.bmp");
		}
		else
		{
			iShowBMP(50, 700, "backs button.bmp");
		}
	}
	Pics_Show();
}

void iMouseMove(int mx, int my)
{


}

void iPassiveMouseMove(int mx, int my)
{
	if (gameState == 0)
	{
		if (mx >= 735 + 50 && mx <= 772 + 50 && my >= 278 && my <= 291)
		{
			pics = 0;
		}
		else if (mx >= 778 && mx <= 806 && my >= 210 && my <= 233)
		{
			pics = 1;
		}
		else if (mx >= 798 + 50 && mx <= 826 + 50 && my >= 227 && my <= 250)
		{
			pics = 2;
		}
		else if (mx >= 855 + 50 && mx <= 888 + 50 && my >= 219 && my <= 244)
		{
			pics = 3;
		}

		else if (mx >= 765 + 50 && mx <= 800 + 50 && my >= 175 && my <= 185)
		{
			pics = 4;
		}
		else if (mx >= 641 + 50 && mx <= 695 + 50 && my >= 193 && my <= 254)
		{
			pics = 5;
		}
		else if (mx >= 665 + 50 && mx <= 692 + 50 && my >= 266 && my <= 292)
		{
			pics = 6;
		}
		else if (mx >= 588 + 50 && mx <= 610 + 50 && my >= 299 && my <= 319)
		{
			pics = 7;
		}
		else if (mx >= 616 + 50 && mx <= 638 + 50 && my >= 301 && my <= 327)
		{
			pics = 8;
		}
		else if (mx >= 647 + 50 && mx <= 663 + 50 && my >= 314 && my <= 333)
		{
			pics = 9;
		}
		else if (mx >= 552 + 50 && mx <= 564 + 50 && my >= 598 + 150 - 309 && my <= 598 + 150 - 302)
		{
			pics = 10;
		}
		else if (mx >= 557 + 50 && mx <= 573 + 50 && my >= 326 && my <= 340)
		{
			pics = 11;
		}
		else if (mx >= 543 + 50 && mx <= 563 + 50 && my >= 598 + 150 - 451 && my <= 598 + 150 - 440)
		{
			pics = 12;
		}
		else if (mx >= 574 + 50 && mx <= 605 + 50 && my >= 363 && my <= 410)
		{
			pics = 13;
		}
		else  if (mx >= 523 + 50 && mx <= 544 + 50 && my >= 434 && my <= 451)
		{
			pics = 14;
		}
		else if (mx >= 465 + 50 && mx <= 492 + 50 && my >= 598 + 150 - 443 && my <= 598 + 150 - 428)
		{
			pics = 15;
		}
		else if (mx >= 311 + 50 && mx <= 363 + 50 && my >= 598 + 150 - 411 && my <= 598 + 150 - 360)
		{
			pics = 16;
		}
		else if (mx >= 230 + 50 && mx <= 283 + 50 && my >= 598 + 150 - 321 && my <= 598 + 150 - 301)
		{
			pics = 17;
		}
		else if (mx >= 446 + 50 && mx <= 462 + 50 && my >= 598 + 150 - 201 && my <= 598 + 150 - 191)
		{
			pics = 18;
		}
		else if (mx >= 391 + 50 && mx <= 436 + 50 && my >= 544 && my <= 569)
		{
			pics = 19;
		}
		else if (mx >= 379 + 50 && mx <= 452 + 50 && my >= 573 && my <= 607)
		{
			pics = 20;
		}
		else if (mx >= 457 + 50 && mx <= 475 + 50 && my >= 560 && my <= 573)
		{
			pics = 21;
		}
		else if (mx >= 372 + 50 && mx <= 419 + 50 && my >= 623 && my <= 643)
		{
			pics = 22;
		}
		else if (mx >= 253 + 50 && mx <= 290 + 50 && my >= 559 && my <= 598)
		{
			pics = 23;
		}
		else if (mx >= 307 + 50 && mx <= 352 + 50 && my >= 619 && my <= 646)
		{
			pics = 24;
		}
		else if (mx >= 320 + 50 && mx <= 355 + 50 && my >= 657 && my <= 679)
		{
			pics = 25;
		}
		else if (mx >= 486 + 50 && mx <= 508 + 50 && my >= 610 && my <= 622)
		{
			pics = 26;
		}
		else
		{
			pics = -1;
		}
	}

	if (gameState == 1 || gameState == 2)
	{
		if (mx >= 50 && mx <= 105 && my >= 700 && my <= 700 + 55)
		{
			flag = 1;
		}
		else
		{
			flag = 0;
		}
	}
	
}

void iMouse(int button, int state, int mx, int my)
{
	// Menu selection
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (gameState == -1)
		{
			// For buttons
			for (int i = 0; i < 4; i++)
			{
				if (mx >= bCordinate[i].x && mx <= bCordinate[i].x + 203 && my >= bCordinate[i].y && my <= bCordinate[i].y + 64)
				{
					gameState = i;
					PlaySound("button", NULL, SND_ASYNC); //Button Sound
					PlaySound("Back_Music", NULL, SND_LOOP | SND_ASYNC); //Background Sound
				}
			}
		}

		//For Map Analysis
		mapstate=mapmatching(mapstate,gameState,mx,my);
		
		if (gameState == 0)
		{
			if (mx >= 970 && mx <= 1193 && my >= 90 && my <= 154)
			{
				if (mapin == -1)
				{
					mapin = 0;
				}

			}
		}
		if (mx >= 50 && mx <= 100 && my >= 700 && my <= 700 + 50)
		{
			if (gameState == 1 || gameState == 2 )
			{
				if (inGame == -1)
				{
					inGame = 0;
				}
			}
		}
		if (gameState == 0 && mapstate != -1)
		{
			if (mx >= 50 && mx <= 100 && my >= 700 && my <= 700 + 50)
			{
				if (mapback == -1)
				{
					mapback = 0;
					gameState = 0;
				}
			}
		}

	}
}

void iKeyboard(unsigned char key)
{
	if (key == '\r'&& gameState<0)
	{
		gameState = -1;
	}
	if (key == '\t')
	{
		gameState = -1;
		mapstate = -1;
	}
	//Sound on or off
	if (key == 's')
	{
		if (musicOn)
		{
			musicOn = false;
			PlaySound(0, 0, 0); //To stop the music
		}
		else
		{
			musicOn = true;
			PlaySound("Back_Music", NULL, SND_LOOP | SND_ASYNC);
		}
	}


}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_LEFT)
	{
		gameState = 0;
		mapstate = -1;
	}

	if (key == GLUT_KEY_HOME)
	{

	}

}

int main()
{
	///srand((unsigned)time(NULL));
	int sum = 250;
	

	for (int i = 4; i >= 0; i--) //Button Co-ordinate
	{
		bCordinate[i].x = 880;
		bCordinate[i].y = sum;
		sum += 70;
	}
	sum = 250;
	for (int i = 3; i >= 0; i--)
	{
		TreasureCor[i].xaxis = 600;
		TreasureCor[i].yaxis = sum;
		sum += 70;
	}
	iInitialize(ScreenWidth, ScreenHieght, "DU_Wizard");
	{
		if (musicOn)
		{
			PlaySound("Back_Music", NULL, SND_LOOP | SND_ASYNC); //To on music & music will autoplay again
		}
	}
	///updated see the documentations
	iStart();
	return 0;
}