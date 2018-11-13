struct buttonCordinate //Button Co-ordinate
{
	int x;
	int y;
}bCordinate[5];
struct Menu_Treaser
{
	int xaxis;
	int yaxis;
}TreasureCor[4];
int flag = 0;
int mposx, mposy; //
char button[4][25] = { "EX.bmp", "INST.bmp", "AT.bmp", "EXT.bmp" }; //Menu Page Button
char homemenu[15] = "home2.bmp"; //Welcome or Home Page
char buttonmenu[15] = "bg3.bmp"; //Background
char str[1000];
int index = 0;
char gamemenue[4][15] = { "mapd.bmp", "cse.bmp", "bg2.bmp", "About2.bmp" }; //For Menu Manipulation
int gameState = -2; // Initial value of Project

bool musicOn = true; // Boolean Function To on the music

//Places File arranged 

char place[27][100] = { "Curzon Hall.txt", "SH Hall.txt", "Fh hall.txt", "sufia.txt", "ekushe.txt", "playground.txt", "pool.txt", "motahar.txt", "mokarrom.txt", "sclib.txt", "cars.txt", "dumed.txt", "shaheed minar.txt", "Bangla academy.txt", "TSC.txt", "jagannath.txt", "salimullah hall.txt", "Zahurul HAq Hall.txt", "DUCSU.txt", "Arts.txt", "FBS.txt", "Social science.txt", "pjharts.txt", "Hazi md mahsin hall.txt", "surjasen.txt", "71 hall.txt", "Fine Arts.txt" };
char placePic[27][100] = { "curzon hall.bmp", "SH.bmp", "FH.bmp", "Sufia kamal hall.bmp", "ekushe.bmp", "playground.bmp", "pool.bmp", "motahar.bmp", "mokarrom.bmp", "sclib.bmp", "cars.bmp", "dumed.bmp", "shaheed minar.bmp", "bangla academy.bmp", "tsc.bmp", "jagannath.bmp", "Salimullah Hall.bmp", "Zohurul hall.bmp", "DUCSU.bmp", "arts.bmp", "FBS.bmp", "Social science.bmp", "pjharts.bmp", "Hazi Muhsin.bmp", "Surja sen.bmp", "71 hall.bmp", "Fine Arts.bmp" };

int mapstate = -1; //Initial value of Map and in this state, it shows full map
int inGame = -1; //For Accesing Back Button
int mapin = -1; // For Accessing Map's Back Button

int pics = -1; 
int mapback = -1;
