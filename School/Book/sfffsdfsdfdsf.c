#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define MAX_X 40
#define MAX_Y 20
#define LETTER_CNT 1024

struct Node{
 char ch;
 int x;
 int y;
 int flag;
 int life;
 int speed;
};

void mainMenu();
void levelSelectMenu();
int gameStart();
int randx(int x, int y);
void gotoxy(int x, int y);
void textcolor(int color_number);

void main()
{
 int select;
 int tmpScore = 0;
 int maxScore = 0;
 while(1)
 {
  system("cls");
  mainMenu();
  fflush(stdin); scanf("%d", &select);
  system("cls");
  switch(select)
  {
  case 1:
   tmpScore = gameStart();
   break;
  case 2:
   if(maxScore < tmpScore) maxScore = tmpScore;
   printf("▤ 현재 최고 점수는 %d 입니다 \n", maxScore);
   system("pause");
   break;
  case 0:
   return;
  default:
   break;
  }
 }
}

void mainMenu()
{
 textcolor(14);
 puts("┏━━━━━━━━━━━━━━━━━┓");
 puts("┃    ▤▤ 문자 피하기 게임 ▤▤          ┃");
 puts("┃                                                   ┃");
 puts("┃          1. 게임 시작                        ┃");
 puts("┃                                                   ┃");
 puts("┃          2. 최고 점수                        ┃");
 puts("┃                                                   ┃");
 puts("┃          0. 종     료                          ┃");
 puts("┃                                                   ┃");
 puts("┗━━━━━━━━━━━━━━━━━┛");
 printf(" Select > ");
}

void levelSelectMenu()
{
textcolor(11);
 puts("┏━━━━━━━━━━━━━━┓");
 puts("┃    ▤▤ 난이도 선택 ▤▤        ┃");
 puts("┃                                          ┃");
 puts("┃        1. 초     급                   ┃");
 puts("┃                                          ┃");
 puts("┃        2. 중     급                   ┃");
 puts("┃                                          ┃");
 puts("┃        3. 고     급                   ┃");
 puts("┃                                          ┃");
 puts("┃        0. 메인 메뉴                 ┃");
 puts("┃                                          ┃");
 puts("┗━━━━━━━━━━━━━━┛");
 printf(" Select > ");
}

int gameStart()
{
 int select;
    struct Node letter[LETTER_CNT];
 int i;
 int randVar, speed1, speed2;
 char ch;
 int playerX = 0, playerY = MAX_Y;
 int score=0;
 while(1)
 {  
  levelSelectMenu();
  fflush(stdin); scanf("%d", &select);
  system("cls");
  if(select == 1) 
  {
   randVar = 20;
   speed1 = 10;
   speed2 = 20;
   break;
  }
  else if(select == 2) 
  {
   randVar = 10;
   speed1 = 5;
   speed2 = 10;
   break;
  }
  else if(select == 3)
  {
   randVar = 5;
   speed1 = 2;
   speed2 = 5;
   break;
  }
  else if(select == 0) return 0;
  else     continue;
 }
 for(i=0; i<LETTER_CNT; i++) letter[i].flag = 0;

 while(1)
 {
  if(randx(0,randVar) == 0)
  {
   for(i=0; i<LETTER_CNT; i++)
   {
    if(letter[i].flag == 0)
    {
     letter[i].ch = randx(0,1)?randx('A','Z'):randx('a','z');
     letter[i].flag = 1;
     letter[i].x = randx(0, MAX_X);
     letter[i].y = 0;
     letter[i].life = randx(50, 200);
     letter[i].speed = randx(speed1, speed2); 
     break;
    }
   }
  }
  for(i=0; i<LETTER_CNT; i++)
  {
   if(letter[i].flag == 1)
   {
    if(--letter[i].life == 0)
    {
     letter[i].life = letter[i].speed;
     gotoxy(letter[i].x, letter[i].y);
     printf("%c", letter[i].ch);
     printf("\b ");
     
     gotoxy(letter[i].x, ++letter[i].y);
     printf("%c", letter[i].ch);
     if(letter[i].y == 20)
     {
      printf("\b ");
      letter[i].flag = 0;
      if(letter[i].x == playerX || letter[i].x == playerX+1)
      {
          gotoxy(2, 23);
          system("pause");
          return score;
      }
      else
      {
       score++;
       gotoxy(45, 5);
       printf("▤ 점수 : %d ", score);
      }
     }
    }
   }
  }
  Sleep(5);
  gotoxy(playerX, playerY);
  printf("△");
  if(kbhit())
  {
   ch = getch();
   switch(ch)
   {
   case 75:
    if(playerX > 1) 
    {
     printf(" ");
     playerX?;
     gotoxy(playerX, playerY);
     printf("△");
    }
    break;
   case 77:
    if(playerX < 40) 
    {
     printf(" ");
     playerX++;
     gotoxy(playerX, playerY);
     printf("△");
    }
    break;
   default:
    break;
   }    
  }
 }
}

int randx(int x, int y)
{
    static int flag = 0;
    int retVal;
    if(flag == 0)
    {
        srand(time(NULL));
        rand();rand();rand();rand();
        srand(rand());
        flag = 1;
    }
    retVal = rand() % (y-x+1) + x;
    return retVal;
}

void gotoxy(int x, int y)
{
     COORD cd;
     cd.X=x;
     cd.Y=y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cd);
}

void textcolor(int color_number)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}
