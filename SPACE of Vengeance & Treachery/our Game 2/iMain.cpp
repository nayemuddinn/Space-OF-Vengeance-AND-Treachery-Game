#define _CRT_SECURE_NO_DEPRECATE
#include "iGraphics.h"
#include<stdio.h>
#include<string>




/**************************              GAME PAUSE          *************************/

bool pause = false;


bool shootMusicOn = false;

bool space = false;





/*********************************                      GAME HIGHSCORE FILE        *****************/
int highScore[5] = { 0, 0, 0, 0, 0 };
int count = 0;
void file_line_counting();
void highscore_function();

void highScoreFunction();







char name[100];
int indexName = 0;



char s[100] = "120";
char s1[100] = "HIGHSCORE   ";
char *str = s;
int scoring = 0;
/****************************         FUNCTION NAME        ************************************/
void starSky();
void fire_Attact();
void enemy_spaceship_destroy();
void fireballCall();
void alienSpaceShip_Lifebar();
void firstBackground();
void enemy1();
void winner();
//void roundfunc();
/**************************************                ROUND               *****************************/

char roundp[3][40] = { "round_1.bmp", "round_2.bmp", "round_3.bmp" };
int roundX = 600;
int roundY = 0;
bool roundup = true;
bool rounddown = false;
bool secondround = false;
void round();
/**************************        SPACESHIP VARIBLES        *********************************************/
int spaceshipX = 0;
int spaceshipY = 0;
/******************************             fire attack             ****************************/
bool spaceShipAttack = false;
int fireAttackX = spaceshipX + 50;
int fireAttackY = spaceshipY + 10;
/**********************************************               ENEMY                      ***********************************/
int enemySpaceshipX = 1350;
int enemySpaceshipY = 500;
char bc[12][20] = { "alein 1.bmp", "alein 1 exp1.bmp", "alein 1 exp2.bmp", "alein 1 exp3.bmp", "alien 2.bmp", "alien 2 exp1.bmp", "alien 2 exp2.bmp", "alien 2 exp3.bmp", "alien 3.bmp", "alien  3 exp1.bmp", "alien  3 exp2.bmp", "alien  3 exp3.bmp" };
int bcIndex = 0;
/*******************************************             GAME OVER STATE                     *****************************************************/
bool gameOver = false;
char game_over[40] = { "Level 2 game over.BMP" };
char win[2][40] = { "winner.bmp", "win.bmp" };
int winnerY = 1080;
int HIGHSCORE = 0;
/*****************************************************            MUSIC                   ****************************************************/
//bool musicOn = true;
/**********************************************************               HITPOINTS    *******************************************/
int hitpoint = 0;
bool col = false;
int hit = 1000;
int bar = 1625;
int enemyLife = 0, spaceshipLife = 0;
int spaceship_healthbar_width = 100;
int enemy_lifebar_width = 300;
/***********************************************************             ENEMY 2            *************************************************/

int hit2 = 1000;

/*******************************************************              FUNCTION NAME                     *********************************************/
void enemy2();
void enemy_spaceship_destroy2();
void firstBackground2();


/************************************************************              ENEMY SPACESHIP 2             **********************************************/
int enemy2_count = 0;
int enemySpaceshipX2 = 1350;
int enemySpaceshipY2 = 500;



bool gameOver2 = false;
bool finalGameOver = false;
/***************************************************               ENEMY 3                 **********************************************************/

bool gameOver3 = false;

int enemySpaceshipX3 = 1300;
int enemySpaceshipY3 = 500;

int hit3 = 1000;
void enemy3();
void enemy_spaceship_destroy3();
void firstBackground3();
void enemyFireballCall2();
void enemyFireballCall3();
/**********************************************************   NEW PART  ==== first ENEMY ATTACK CODE PORTION       ***************************************/
int enemy_fireAttackY = enemySpaceshipY - 10;
int enemy_fireAttackX = enemySpaceshipX - 10;

int enemy_fireAttackY2 = enemySpaceshipY2 - 10;
int enemy_fireAttackX2 = enemySpaceshipX2 - 10;

int enemy_fireAttackY3 = enemySpaceshipY3 - 10;
int enemy_fireAttackX3 = enemySpaceshipX3 - 10;

char enemy_fire_Attack[50] = { "enemy_fire_attack.bmp" };
int enemy_spaceshipX;
void enemyFireballCall();
bool enemy_spaceShipAttack = false;
void spaceship_destroy();

void spaceship_destroy2();

void spaceship_destroy3();

int myhit = 1000;
bool mygameOver = false;



/**********  fireball varibles *********/
bool checkFireAttack = false;

bool checkFireAttack2 = false;

bool checkFireAttack3 = false;

/***********        enemy movement varibles      ***********/

void enemyMovement();
bool enemyMovementUp = false;
bool enemyMovemntDown = true;

void enemyMovement2();
bool enemyMovementUp2 = false;
bool enemyMovemntDown2 = true;

void enemyMovement3();
bool enemyMovementUp3 = false;
bool enemyMovemntDown3 = true;












/******************************             level 3         **********************/




int level3 = 0;
int charecterX = 30;
int charecterY = 125;

int bulletX = charecterX + 200;
int bulletY = charecterY + 200;

int alienX = 1450;
int alienY = charecterY;

int alienX2 = 1550;
int alienY2 = charecterY;
int alienkill = 0;

int alien_killed = 0;
bool newalien = false;

void alien_destroy();
bool bullet = true;
bool charecterAttack = false;
bool level3_gameOver = false;

void alien_destroy(){
	if (bulletX>alienX)
		alienY += 20;
}
/*******************************          bullet call level 3                **************************/
void bulletCall(){
	if (charecterAttack)
	{
		if (bulletX>1700)
		{


			bulletX = charecterX + 50;
			charecterAttack = false;

		}
		else
		{

			bulletX += 20;



		}


	}
	if (bulletX >= alienX&&bullet)
	{

		alienY -= 500;
		alien_killed = 1;
		if (bullet)
		{
			bulletX = charecterX + 200;
			bullet = false;
			charecterAttack = false;
		}

	}

}
bool alienMovement = true;
void alien(){
	/*
	if (alien_killed == 1)
	{
	//bulletX = charecterX + 150;
	alien_killed = 0;
	newalien = true;
	if (bulletX >= alienX2)
	{
	alienkill++;
	alienX2 += 10;
	if (alienkill>4)
	alienY2 -= 20;
	}
	}*/
	if (alienMovement)
	{
		if (alienX > charecterX)
		{
			alienX -= 10;

		}
		if (alienX <= charecterX)
		{
			level3_gameOver = true;

		}
		if (alienX2 > charecterX)
		{
			alienX2 -= 10;

		}
		if (alienX2 <= charecterX)
		{
			level3_gameOver = true;

		}

	}


	//alien_destroy();


}











#define screenLength 1550
#define screenWidth 850

bool musicOn = true;
int level = 1;
void level2();
bool esc = false, yes = false, no = false, f1 = false;
bool game_exit = false, exit_yes = false, exit_no;
bool returnYes = false, returnNo = false;

bool p = false, o = false, c = false, e = false, h = false;




//MOUSE INITIALIZERS

int playX = 110;
int playY = 530;
int optionX = 110;
int optionY = 410;
int controlX = 110;
int controlY = 290;
int scoreX = 110;
int scoreY = 170;
int exitX = 110;
int exitY = 50;
int yesX = 640;
int yesY = 420;
int noX = 810;
int noY = 420;

int gameState = -1;

int showY = 500;
char showScore[1000];
char *showScorePointer = showScore;
char showScore1[1000];
char *showScorePointer1 = showScore1;
char showScore2[1000];
char *showScorePointer2 = showScore2;
char showScore3[1000];
char *showScorePointer3 = showScore3;
char showScore4[1000];
char *showScorePointer4 = showScore4;

//**//////////////     MENU    ///////////////**//

void menu()
{
	if (gameState == 0)
	{
		iShowBMP(0, 0, "Main_menu_1.bmp");
		iShowBMP2(35, 600, "name_2.bmp", 0);


		///////   BUTTON ////////
		iShowBMP2(playX, playY, "play.bmp", 0);
		iShowBMP2(controlX, controlY, "controls.bmp", 0);
		iShowBMP2(optionX, optionY, "options.bmp", 0);
		iShowBMP2(exitX, exitY, "exit.bmp", 0);
		iShowBMP2(scoreX, scoreY, "Highscore.bmp", 0);
	}




	if (gameState == 1 && p)
	{
		iShowBMP(0, 0, "enterName.bmp");
		iText(600, 330, name, GLUT_BITMAP_TIMES_ROMAN_24);
		HIGHSCORE = 0;
	}

	if (gameState == 2 && o)
	{
		if (f1)
		{
			iShowBMP(0, 0, "mute.bmp");
		}
		else
		{
			iShowBMP(0, 0, "sound_on.bmp");
		}
	}

	if (gameState == 3 && c)
	{
		iShowBMP(0, 0, "Controls_page.bmp");
	}


	if (gameState == 4 && e)
	{
		iShowBMP(0, 0, "Main_menu.bmp");
		iShowBMP2(500, 400, "exit_page.bmp", 0);
		iShowBMP2(yesX, yesY, "yes.bmp", 0);
		iShowBMP2(noX, noY, "no.bmp", 0);
	}
	if (gameState == 6 && h)
	{
		highScoreFunction();



	}






}
void idrawForMenu(){

	menu();

	if (gameState == -1)
	{
		//HighScore();
		iShowBMP(0, 0, "Home_screen.bmp");
		iShowBMP2(350, 500, "name.bmp", 0);
		iShowBMP2(530,50, "enterToContinue.bmp", 0);
	}


	if (gameState == 0)
	{
		menu();
	}




	if (gameState == 4 && e)
	{
		iShowBMP(0, 0, "Main_menu.bmp");
		iShowBMP2(500, 400, "exit_page.bmp", 0);
		iShowBMP2(yesX, yesY, "yes.bmp", 0);
		iShowBMP2(noX, noY, "no.bmp", 0);

		if (exit_yes)
		{
			count = 0;
			file_line_counting();
			highscore_function();
			finalGameOver = false;

			exit(0);
		}
		if (exit_no)
		{
			h = false, p = false, o = false, c = false, e = false, esc = false;
			gameState = 0;
			exit_no = false;
			pause = false;
		}
	}







}




void iDraw()
{
	iClear();


	if (gameState < 5 || gameState == 6)
	{
		idrawForMenu();
	}


	if (gameState == 5)
	{
		if (space)
			space = false;
		level2();
	}
	if (esc == true && gameState != 4)
	{

		iShowBMP2(500, 400, "dailogue_box_main_menu.bmp", 0);
		iShowBMP2(640, 420, "yes.bmp", 0);
		iShowBMP2(810, 420, "no.bmp", 0);

		if (returnYes)
		{
			p = false, o = false, c = false, e = false, h = false;
			gameState = 0;
			if (gameState == 0)
				esc = false;
			returnYes = false;

		}
		if (returnNo)
		{
			//if (gameState == 0)
			esc = false;
			returnNo = false;
		}

	}



}



void iMouseMove(int mx, int my)
{

}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{

}

void iMouse(int button, int state, int mx, int my)
{

	printf("mx=%d\nmy=%d\ngamestate=%d\n", mx, my, gameState);

	if (gameState == 0)
	{

		if (mx >= playX && mx <= playX + 216 && my >= playY && my <= playY + 68)
		{
			p = true;
			gameState++;
			pause = false;
		}

		else if (mx >= optionX && mx <= optionX + 217 && my >= optionY && my <= optionY + 70)
		{
			o = true;
			gameState = 2;
		}

		else if (mx >= controlX && mx <= controlX + 217 && my >= controlY && my <= controlY + 70)
		{
			c = true;
			gameState = 3;
		}

		else if (mx >= exitX && mx <= exitX + 217 && my >= exitY && my <= exitY + 70)
		{
			e = true;
			gameState = 4;
			//pause = true;
		}

		else if (mx >= scoreX && mx <= scoreX + 217 && my >= scoreY && my <= scoreY + 70)
		{
			h = true;
			gameState = 6;
		}


	}

	else if (mx >= yesX && mx <= yesX + 120 && my >= yesY && my <= yesY + 50 && gameState == 4)
	{
		exit_yes = true;
	}

	else if (mx >= noX && mx <= noX + 120 && my >= noY && my <= noY + 50 && gameState == 4)
	{
		exit_no = true;
	}

	else if (mx >= yesX && mx <= yesX + 120 && my >= yesY && my <= yesY + 50 && (gameState == 1 || gameState == 2 || gameState == 3 || gameState == 5 || gameState == 6))
	{
		returnYes = true;
		//finalGameOver = false;
	}

	else if (mx >= noX && mx <= noX + 120 && my >= noY && my <= noY + 50 && gameState == 1 || gameState == 2 || gameState == 3 || gameState == 5 || gameState == 6)
	{
		returnNo = true;
		pause = false;

	}
}




void iKeyboard(unsigned char key)
{
	if (key == 27)
	{
		if (pause)
		{
			pause = false;

		}
		else
		{
			pause = true;
		}
	}
	if (key == 13 && gameState == 1 && p == true)
	{
		gameState = 5;
		pause = false;
	}

	if (key == 13 && gameState == -1)
	{
		gameState = 0;
	}


	if (key == 27 && gameState != 0 && gameState != -1)
	{
		esc = true;
		pause = true;
		//printf("%d", pause);
	}



	if (gameState == 2 && key == 's'&& o == true)
	{

		if (musicOn)
		{
			musicOn = false;
			PlaySound(0, 0, 0);
			f1 = true;
		}
		else
		{
			musicOn = true;
			PlaySound("music\\2022-07-08 11-54-33.wav", NULL, SND_ASYNC | SND_LOOP);
			f1 = false;
		}
	}
	if (key == 32)
	{
		if (spaceShipAttack == false)
		{
			if (space != true)
				spaceShipAttack = true;

		}
		/*if (shootMusicOn)
		{
		shootMusicOn = false;
		PlaySound("music\\2022-07-08 11-54-33.wav", NULL, SND_ASYNC | SND_LOOP);
		//f1 = true;
		}
		if (!shootMusicOn)
		{
		shootMusicOn = true;
		musicOn = false;
		PlaySound("music\\Shooting Sound.wav", NULL, SND_ASYNC );
		shootMusicOn = false;
		musicOn = true;

		//f1 = false;

		}
		/*if (musicOn)
		PlaySound("music\\2022-07-08 11-54-33.wav", NULL, SND_ASYNC);
		/*
		/**/

	}
	if (key == 'z')
	{
		if (charecterAttack == false)
		{
			charecterAttack = true;
		}
	}
	///////////////////////////**  ENTER NAME ** ///////////////////

	if (gameState == 1 && key != '\b')
	{
		space = true;
		name[indexName] = key;
		indexName++;
		name[indexName] = '\0';
	}
	else
	{
		space = true;
		if (indexName <= 0)
			indexName = 0;
		else
			indexName--;

		name[indexName] = '\0';
	}


}


void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_LEFT)
	{

		if (spaceshipX < 5)
			spaceshipX = 0;
		else
		{
			spaceshipX -= 5;
		}
		fireAttackX -= 5;
	}
	if (key == GLUT_KEY_RIGHT)
	{
		if (spaceshipX>screenLength - 300)
			spaceshipX = screenLength - 300;
		else
			spaceshipX += 5;
		fireAttackX += 5;
	}
	if (key == GLUT_KEY_UP)
	{
		if (spaceshipY>750)
			spaceshipY = 750;
		else
		{
			spaceshipY += 5;
		}

		fireAttackY += 5;
	}

	if (key == GLUT_KEY_DOWN)
	{
		if (spaceshipY < 0)
			spaceshipY = 0;
		else
			spaceshipY -= 5;
		fireAttackY -= 5;
	}
}


int main()
{


	//fprintf(fp, "%d \n", HIGHSCORE);








	if (alienMovement)
		iSetTimer(70, alien);
	iSetTimer(25, bulletCall);




	//iSetTimer(170, enemyMovement3);
	//iSetTimer(190, enemyMovement2);
	if (pause == false)
	{
		iSetTimer(200, enemyMovement);
	}

	iSetTimer(25, round);
	if (pause == false)
		iSetTimer(25, enemyFireballCall);
	//iSetTimer(20, enemyFireballCall2);
	//iSetTimer(13, enemyFireballCall3);


	iSetTimer(1, fireballCall);//25
	iSetTimer(25, winner);











	if (musicOn)
		PlaySound("music\\2022-07-08 11-54-33.wav", NULL, SND_LOOP | SND_ASYNC);
	if (shootMusicOn)
		PlaySound("music\\Shooting Sound.wav", NULL, SND_LOOP | SND_ASYNC);


	indexName = strlen(name) - 1;
	iInitialize(screenLength, screenWidth, "Space OF Vengeance AND Treachery");

	iStart();
	return 0;
}






















/*******************************************    fireball function for enemy  1         **********************************************************/

void enemyFireballCall(){
	if (pause == false)
	{
		if (enemy2_count == 0)
		{
			if (enemy_fireAttackX<spaceshipX)
			{
				spaceship_destroy();

				enemy_fireAttackX = 1400 - 100;
				checkFireAttack = true;
				if (checkFireAttack)
					enemy_fireAttackY = enemySpaceshipY;

			}
			else
			{
				if (enemy_fireAttackX >= 0)
				{
					enemy_fireAttackX -= 20;
					checkFireAttack = false;
				}

				else
				{
					enemy_fireAttackX = 1400 - 100;
					checkFireAttack = true;
					if (checkFireAttack)
						enemy_fireAttackY = enemySpaceshipY;
				}




			}
		}

		/*******************************************    fireball function for enemy  2         **********************************************************/
		if (enemy2_count == 1)
		{
			if (enemy_fireAttackX2<spaceshipX)
			{
				spaceship_destroy2();//spaceship_destroy2();

				enemy_fireAttackX2 = 1400 - 100;
				checkFireAttack2 = true;
				if (checkFireAttack2)
					enemy_fireAttackY2 = enemySpaceshipY2;

			}
			else
			{
				if (enemy_fireAttackX2 >= 0)
				{
					enemy_fireAttackX2 -= 20;
					checkFireAttack2 = false;
				}

				else
				{
					enemy_fireAttackX2 = 1600 - 100;
					checkFireAttack2 = true;
					if (checkFireAttack2)
						enemy_fireAttackY2 = enemySpaceshipY2;
				}




			}
		}


		/*******************************************    fireball function for enemy  3         **********************************************************/
		if (enemy2_count == 2)
		{
			if (enemy_fireAttackX3<spaceshipX)
			{
				spaceship_destroy3();//spaceship_destroy3();

				enemy_fireAttackX3 = 1400 - 100;
				checkFireAttack3 = true;
				if (checkFireAttack3)
					enemy_fireAttackY3 = enemySpaceshipY3;

			}
			else
			{
				if (enemy_fireAttackX3 >= 0)
				{
					enemy_fireAttackX3 -= 20;
					checkFireAttack3 = false;
				}

				else
				{
					enemy_fireAttackX3 = 1400 - 100;
					checkFireAttack3 = true;
					if (checkFireAttack3)
						enemy_fireAttackY3 = enemySpaceshipY3;
				}




			}
		}
	}


}



/***********************************************                  MY   SPACESHIP   PART                *****************************/

void spaceship_destroy()
{
	if (enemy2_count == 0)
	if ((enemy_fireAttackX < spaceshipX) && ((enemy_fireAttackY + 150 >= spaceshipY) && (enemy_fireAttackY <= spaceshipY + 150)))
	{
		spaceshipLife++;

		myhit -= 201;


		if (myhit < 0)
		{
			mygameOver = true;
		}
	}


}


void spaceship_destroy2()
{
	if (enemy2_count == 1)
	if ((enemy_fireAttackX2 < spaceshipX) && ((enemy_fireAttackY2 + 150 >= spaceshipY) && (enemy_fireAttackY2 <= spaceshipY + 150)))
	{
		spaceshipLife++;

		myhit -= 201;


		if (myhit < 0)
		{
			mygameOver = true;
		}
	}

}

void spaceship_destroy3(){
	if (enemy2_count == 2)
	if ((enemy_fireAttackX3 < spaceshipX) && ((enemy_fireAttackY3 + 150 >= spaceshipY) && (enemy_fireAttackY3 <= spaceshipY + 150)))
	{
		spaceshipLife++;//mySpaceshipLife3++;

		myhit -= 201;//myhit3


		if (myhit < 0)
		{
			mygameOver = true;//mygameover3
		}
	}
}
//you loose page bellow:
void mySpaceShip_Lifebar(){

	iSetColor(173, 255, 47);
	if (spaceshipLife < 13)
	{
		spaceship_healthbar_width = 265 - (20 * spaceshipLife);
	}
	if (spaceshipLife >= 13)
	{
		finalGameOver = true;
	}
	iFilledRectangle(27, 800, spaceship_healthbar_width, 20);
	iShowBMP2(0, 780, "lifebar_spaceship.bmp", 0);
}

void mySpaceShip(){
	if (!mygameOver)
	{

		firstBackground();

		iShowBMP2(enemySpaceshipX, enemySpaceshipY, bc[0], 0);
		/*if (enemyLife == 3)
		iShowBMP2(enemySpaceshipX, enemySpaceshipY, bc[1], 0);
		if (enemyLife == 4)
		iShowBMP2(enemySpaceshipX, enemySpaceshipY, bc[2], 0);

		//iRectangle(enemySpaceshipX, enemySpaceshipY, 300, 150);*/
	}
	else if (mygameOver)
	{
		firstBackground();
		//iShowBMP2(enemySpaceshipX, enemySpaceshipY, bc[3], 0);
		if (spaceshipLife == 6)
		{
			if (spaceshipY>-15)
				spaceshipY -= 20;
			iShowBMP(0, 0, game_over);



		}



	}
}


void level2(){
	if (finalGameOver == false)
	{
		if (enemy2_count == 0)
		{

			iShowBMP2(roundX, roundY, "round_1.bmp", 0);
			enemy1();
			sprintf(s, "%d", HIGHSCORE);
			iSetColor(255, 255, 255);
			iText(30, 750, s1, GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 750, str, GLUT_BITMAP_TIMES_ROMAN_24);
		}

		if (enemy2_count == 1)
		{


			iShowBMP2(roundX, roundY, "round_2.bmp", 0);

			enemy2();
			sprintf(s, "%d", HIGHSCORE);
			iSetColor(255, 255, 255);
			iText(30, 750, s1, GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 750, str, GLUT_BITMAP_TIMES_ROMAN_24);
		}

		if (enemy2_count == 2)
		{

			iShowBMP2(roundX, roundY, "round_3.bmp", 0);

			enemy3();
			sprintf(s, "%d", HIGHSCORE);
			iSetColor(255, 255, 255);
			iText(30, 750, s1, GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 750, str, GLUT_BITMAP_TIMES_ROMAN_24);

		}

		if (enemy2_count == 3)
		{
			/*if (level3 < 10)
			{
			firstBackground3();
			iShowBMP2(0, winnerY, win[1], 0);
			iShowBMP2(500, 300, win[0], 0);
			alienMovement = true;
			}
			else
			{
			alienMovement = true;
			iShowBMP(0, 0, "background.bmp");
			iShowBMP2(bulletX, bulletY, "bullet.bmp", 0);
			iShowBMP2(charecterX, charecterY, "a1.bmp", 0);

			iShowBMP2(alienX, alienY, "alienCharecter.bmp", 0);
			if (newalien)
			iShowBMP2(alienX2, alienY2, "alienCharecter.bmp", 0);
			if (level3_gameOver)
			iShowBMP(0, 0, game_over);
			}
			*/
			//winMusicOn = true;
			musicOn = false;
			firstBackground3();
			iShowBMP2(500, 200, win[0], 0);
			iShowBMP2(0, winnerY, win[1], 0);

		}
	}

	if (finalGameOver == true)
	{
		iShowBMP(0, 0, game_over);
		//finalGameOver = false;
	}
}



























/**********************************************************        ENEMY 1        ****************************************************************/


void enemy1(){
	if (!gameOver)
	{

		firstBackground();

		iShowBMP2(enemySpaceshipX, enemySpaceshipY, bc[0], 0);
		if (enemyLife == 8)
			iShowBMP2(enemySpaceshipX, enemySpaceshipY, bc[1], 0);
		if (enemyLife == 9)
			iShowBMP2(enemySpaceshipX, enemySpaceshipY, bc[2], 0);

		//iRectangle(enemySpaceshipX, enemySpaceshipY, 300, 150);
	}
	else if (gameOver && (!gameOver2))
	{
		firstBackground();

		iShowBMP2(enemySpaceshipX, enemySpaceshipY, bc[3], 0);
		if (enemyLife == 11)
		{
			if (enemySpaceshipY > -15)
			{
				enemySpaceshipY -= 20;

			}

			else
			{
				roundup = true;
				enemy2_count = 1;
				enemyLife = 0;
			}



		}



	}

}

void enemyMovement(){
	if (pause == false)
	{
		if (enemyMovementUp)
		{
			if (enemySpaceshipY > 10)
			{
				enemySpaceshipY += 20;

			}
			if (enemySpaceshipY >600)
			{
				enemyMovementUp = false;
				enemyMovemntDown = true;
			}

		}

		if (enemyMovemntDown)
		{
			if (enemySpaceshipY < 1600)
			{
				enemySpaceshipY -= 20;
			}

			if (enemySpaceshipY < 50)
			{
				enemyMovementUp = true;
				enemyMovemntDown = false;
			}
		}
		if (enemyMovementUp2)
		{
			if (enemySpaceshipY2 > 10)
			{
				enemySpaceshipY2 += 20;

			}
			if (enemySpaceshipY2 >600)
			{
				enemyMovementUp2 = false;
				enemyMovemntDown2 = true;
			}

		}

		if (enemyMovemntDown2)
		{
			if (enemySpaceshipY2 < 1600)
			{
				enemySpaceshipY2 -= 20;
			}

			if (enemySpaceshipY2 < 50)
			{
				enemyMovementUp2 = true;
				enemyMovemntDown2 = false;
			}
		}
		if (enemyMovementUp3)
		{
			if (enemySpaceshipY3 > 10)
			{
				enemySpaceshipY3 += 20;

			}
			if (enemySpaceshipY3 >600)
			{
				enemyMovementUp3 = false;
				enemyMovemntDown3 = true;
			}

		}

		if (enemyMovemntDown3)
		{
			if (enemySpaceshipY3 < 1600)
			{
				enemySpaceshipY3 -= 20;
			}

			if (enemySpaceshipY3 < 50)
			{
				enemyMovementUp3 = true;
				enemyMovemntDown3 = false;
			}
		}
	}


}

void firstBackground(){

	starSky();


	mySpaceShip_Lifebar();
	alienSpaceShip_Lifebar();
	//iRectangle(spaceshipX, spaceshipY, 375, 135);
	iShowBMP2(spaceshipX, spaceshipY, "spaceship.BMP", 0);

	if (spaceShipAttack)
	{


		//iRectangle(fireAttackX, fireAttackY, 180, 150);
		iShowBMP2(fireAttackX, fireAttackY, "spaceship_attack.BMP", 0);

	}
	//iRectangle(enemy_fireAttackX, enemy_fireAttackY, 180, 150);
	iShowBMP2(enemy_fireAttackX, enemy_fireAttackY, enemy_fire_Attack, 0);

}


void alienSpaceShip_Lifebar(){

	iSetColor(255, 0, 0);
	if (enemyLife<11)
		iFilledRectangle(1336 + (20 * enemyLife), 800, enemy_lifebar_width, 20);
	iShowBMP2(1305, 780, "lifebar_alien.BMP", 0);
}

void fireballCall()
{
	if (enemy2_count == 0)
	{
		if (spaceShipAttack)
		{
			if (fireAttackX>enemySpaceshipX)
			{
				enemy_spaceship_destroy();

				fireAttackX = spaceshipX + 50;
				spaceShipAttack = false;

			}
			else
			{
				fireAttackX += 20;



			}

		}
	}

	if (enemy2_count == 1)
	{
		if (spaceShipAttack)
		{
			if (fireAttackX>enemySpaceshipX2)
			{
				enemy_spaceship_destroy2();

				fireAttackX = spaceshipX + 50;
				spaceShipAttack = false;

			}
			else
			{
				fireAttackX += 20;



			}

		}
	}
	if (enemy2_count == 2)
	{
		if (spaceShipAttack)
		{
			if (fireAttackX>enemySpaceshipX3)
			{
				enemy_spaceship_destroy3();

				fireAttackX = spaceshipX + 50;
				spaceShipAttack = false;

			}
			else
			{
				fireAttackX += 20;



			}

		}
	}

}

void enemy_spaceship_destroy()
{
	if ((fireAttackX > enemySpaceshipX) && ((fireAttackY <= enemySpaceshipY + 150) && (fireAttackY + 150 >= enemySpaceshipY)))
	{
		enemyLife++;
		HIGHSCORE += 200;

		//fprintf(fp, "%d \n", HIGHSCORE);
		enemy_lifebar_width += 10;
		hit -= 101;


		if (hit < 0)
		{
			gameOver = true;
		}
	}

}


























/**********************************************************************        ENEMY 2        ****************************************************************************/


void enemy2(){

	if (!gameOver2)
	{
		firstBackground2();
		iShowBMP2(enemySpaceshipX2, enemySpaceshipY2, bc[4], 0);
		if (enemyLife == 8)
			iShowBMP2(enemySpaceshipX2, enemySpaceshipY2, bc[5], 0);
		if (enemyLife == 9)
		{
			iShowBMP2(enemySpaceshipX2, enemySpaceshipY2, bc[6], 0);
		}



	}

	if (gameOver2)
	{
		firstBackground2();
		iShowBMP2(enemySpaceshipX2, enemySpaceshipY2, bc[7], 0);


		if (enemyLife == 11)
		{
			if (enemySpaceshipY2>-15)
				enemySpaceshipY2 -= 20;
			else
			{
				roundup = true;
				enemy2_count = 2;
				enemyLife = 0;

			}
		}
	}


}



void enemy_spaceship_destroy2()
{
	if ((fireAttackX > enemySpaceshipX2) && ((fireAttackY <= enemySpaceshipY2 + 150) && (fireAttackY + 150 >= enemySpaceshipY2)))
	{
		enemyLife++;
		HIGHSCORE += 500;

		//fprintf(fp, "%d \n", HIGHSCORE);
		hit2 -= 101;


		if (hit2 < 0)
		{
			gameOver2 = true;
		}
	}

}



void firstBackground2(){

	starSky();
	iSetColor(173, 255, 47);
	mySpaceShip_Lifebar();
	alienSpaceShip_Lifebar();

	iShowBMP2(spaceshipX, spaceshipY, "spaceship.BMP", 0);

	if (spaceShipAttack)
	{


		//iRectangle(fireAttackX, fireAttackY, 180, 150);
		iShowBMP2(fireAttackX, fireAttackY, "spaceship_attack.BMP", 0);

	}
	//iRectangle(enemy_fireAttackX2, enemy_fireAttackY2, 180, 150);
	iShowBMP2(enemy_fireAttackX2, enemy_fireAttackY2, enemy_fire_Attack, 0);

}



























/**********************************************************************        ENEMY 3        ****************************************************************************/




void enemy3(){

	if (!gameOver3)
	{
		firstBackground3();
		//iRectangle(enemySpaceshipX3, enemySpaceshipY3, 310, 450);
		iShowBMP2(enemySpaceshipX3, enemySpaceshipY3, bc[8], 0);
		if (enemyLife == 8)
			iShowBMP2(enemySpaceshipX3, enemySpaceshipY3, bc[9], 0);
		if (enemyLife == 9)
		{
			iShowBMP2(enemySpaceshipX3, enemySpaceshipY3, bc[10], 0);
		}



	}

	if (gameOver3)
	{
		firstBackground3();
		iShowBMP2(enemySpaceshipX3, enemySpaceshipY3, bc[11], 0);


		if (enemyLife == 11)
		{
			if (enemySpaceshipY3>-15)
				enemySpaceshipY3 -= 20;
			else
			{

				iShowBMP2(roundX, roundY, "round_2.bmp", 0);
				enemy2_count = 3;


			}
		}
	}


}



void enemy_spaceship_destroy3()
{
	if ((fireAttackX > enemySpaceshipX3) && ((fireAttackY <= enemySpaceshipY3 + 450) && (fireAttackY + 450 >= enemySpaceshipY3)))
	{
		enemyLife++;
		HIGHSCORE += 800;

		//fprintf(fp, "%d \n", HIGHSCORE);
		hit3 -= 101;


		if (hit3 < 0)
		{
			gameOver3 = true;
		}
	}

}



void firstBackground3(){

	starSky();
	iSetColor(173, 255, 47);
	mySpaceShip_Lifebar();
	alienSpaceShip_Lifebar();

	iShowBMP2(spaceshipX, spaceshipY, "spaceship.BMP", 0);

	if (spaceShipAttack)
	{


		//	iRectangle(fireAttackX, fireAttackY, 180, 150);
		iShowBMP2(fireAttackX, fireAttackY, "spaceship_attack.BMP", 0);

	}
	//iRectangle(enemy_fireAttackX3, enemy_fireAttackY3, 180, 150);
	iShowBMP2(enemy_fireAttackX3, enemy_fireAttackY3, enemy_fire_Attack, 0);

}




/***************************************************************************************************************************************/


void starSky(){

	for (int i = 0; i < 100; i++)
	{
		int r = rand() % 5;
		int x = rand() % 1920;
		int y = rand() % 1080;
		int cr = rand() % 255;
		int cg = rand() % 255;
		int cb = rand() % 255;
		iSetColor(255, 255, 255);
		//iSetColor(139, 139, 139);
		iFilledCircle(x, y, r);

	}

	iSetColor(255, 255, 255);

}

void winner(){

	if (winnerY > 0)
	{
		winnerY -= 10;
		level3++;
	}

	else
		winnerY = 1080;

}

void round(){
	if (roundup)
	{
		if (roundY < 500)
			roundY += 10;
		else
		{
			roundup = false;
			rounddown = true;
		}
	}
	if (rounddown)
	{

		roundY -= 10;
		if (roundY < 0)
		{
			rounddown = false;
			roundup = false;

		}
	}

}
void highscore_function(){
	if (count == 0)
	{
		FILE *fp = fopen("GAME_HIGHSCORE.txt", "w");

		fprintf(fp, "%d \n", HIGHSCORE);
		fclose(fp);
	}

	else
	{
		FILE *fpRead = fopen("GAME_HIGHSCORE.txt", "r");
		int i = 0, x;
		while (fscanf(fpRead, "%d \n", &x) != EOF)
		{

			highScore[i] = x;
			i++;

		}
		fclose(fpRead);
		for (i = 0; i<5; i++)
		{
			if (HIGHSCORE == highScore[i])
				break;
			if (HIGHSCORE>highScore[i])
			{
				// shift elements forward
				for (int j = 5 - 1; j > i; j--)
					highScore[j] = highScore[j - 1];

				// insert x at pos
				highScore[i] = HIGHSCORE;
				break;

			}

		}
		FILE *fpWrite = fopen("GAME_HIGHSCORE.txt", "w");
		for (int i = 0; i < 5; i++)
			fprintf(fpWrite, "%d \n", highScore[i]);
		fclose(fpWrite);

	}
}

void file_line_counting()
{

	FILE *fp = fopen("GAME_HIGHSCORE.txt", "r");

	char c;


	for (c = getc(fp); c != EOF; c = getc(fp))
	if (c == '\n')
		count = count + 1;
	fclose(fp);



}

void highScoreFunction(){
	FILE *fpRead = fopen("GAME_HIGHSCORE.txt", "r");
	int i = 0, x;
	while (fscanf(fpRead, "%d \n", &x) != EOF)
	{

		highScore[i] = x;
		i++;

	}
	fclose(fpRead);

	iShowBMP(0, 0, "Highscore1.bmp");
	//iShowBMP2(200, 200, "200.bmp", 0);
	//	for (i = 0; i < 5; i++)
	//{
	sprintf(showScore, "%d", highScore[0]);
	iSetColor(255, 255, 255);
	iText(1100, 350, showScorePointer, GLUT_BITMAP_TIMES_ROMAN_24);

	sprintf(showScore1, "%d", highScore[1]);
	iSetColor(255, 255, 255);
	iText(1100, 270, showScorePointer1, GLUT_BITMAP_TIMES_ROMAN_24);

	sprintf(showScore2, "%d", highScore[2]);
	iSetColor(255, 255, 255);
	iText(1100, 190, showScorePointer2, GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf(showScore3, "%d", highScore[3]);
	iSetColor(255, 255, 255);
	iText(1100, 110, showScorePointer3, GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf(showScore4, "%d", highScore[4]);
	iSetColor(255, 255, 255);
	iText(1100, 30, showScorePointer4, GLUT_BITMAP_TIMES_ROMAN_24);

}