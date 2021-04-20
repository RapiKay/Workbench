#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define _CRT_SECURE_NO_WARNINGS

int selectedPlayer;
int player1_RSP, player2_RSP;
int res;
int again_choose;
int p1win = 0, p1draw = 0, p1lose = 0, p1special_lose = 0;
int p2win = 0, p2draw = 0, p2lose = 0, p2special_lose = 0;
int player1, player2,playerSelect;
int stat[1000][1000][1000] = {NULL};            // 플레이어 1 , 플레이어 2, 누가 승리?
int stat_stack = 1;

char loginID_Input[100],loginPW_Input[100];
char buffer[20];    // 파일을 읽을 때 사용할 임시 공간

bool dev_mode = false;
bool for_output_bugfix = false;
bool printing_output = false;

void dev_mode_start()
{
    dev_mode = true;
    system("cls");
    printf("\n 개발 모드 켜짐 ");
    printf("\n\n 3초 후 가위바위보 시작 창으로 돌아갑니다. ");
    Sleep(1000);printf("\n 3");
    Sleep(1000);printf("\n 2");
    Sleep(1000);printf("\n 1"); 
    system("cls");
    dev_stage();
}
void stats()
{
    if(printing_output == false)printf("\n\n\n\n\n\n\n");
    if(dev_mode == true)printf("\n"ANSI_COLOR_RED"dev mode"ANSI_COLOR_RESET);
    printf("\n\n PLAYER1의 현 전적입니다.\n \n");
    printf(" 승리 : %d\n 무승부 : %d\n 패배 : %d", p1win, p1draw, p1lose);
    printf("\n  ┗━━ 반칙패 : %d\n\n\n\n\n\n\n\n",p1special_lose);
}

void start()
{
    printf(" 가위바위보 게임입니다.\n");
    printf(" 바위 : 0 \n 가위 : 1 \n 보 : 2\n 이외의 경우는 반칙패로 처리됩니다.\n\n");
    printf(" 내고 싶으신 수를 입력해주세요 : ");
}

void dev_start()
{
    printf(" 가위바위보 게임 개발모드 입니다.\n");
    printf(" 바위 : 0 \n 가위 : 1 \n 보 : 2\n 승리 : 11 \n 무승부 : 12\n 패배 : 13\n 이외의 경우는 반칙패로 처리됩니다.\n\n");
    printf(" 내고 싶으신 수를 입력해주세요 : ");
}

void input()
{
    srand(tiplayer1_RSP(NULL));
    if(selectedPlayer == 1)
        scanf("%d",&player1_RSP);
    else
        scanf("%d",&player2_RSP);
    if(dev_mode == true){
        if(selectedPlayer == 1){
            printf("    scaned %d\n", player1_RSP);
        else{
            printf("    scaned %d\n", player2_RSP);
        }
}

void process()
{
    if((player1_RSP==0 && player2_RSP==1) || (player1_RSP==1 && player2_RSP==2) || (player1_RSP==2 && player2_RSP==0)){        //승리
        res = 1;
        p1win++;
        if(dev_mode == true)printf("\n runned by 1 (승리 판정)");
    }
    else if(player1_RSP==player2_RSP){                                                       //무승부
        res = 0;
        p1draw++;
        if(dev_mode == true)printf("\n runned by 0 (무승부 판정)");
    }   
    else if(player1_RSP != 0 && player1_RSP != 1 && player1_RSP != 2){                                 //반칙패
        res = -2;
        special_lose++;
        p1lose++;
        if(dev_mode == true)printf("\nrunned by -2 (반칙패 판정)");                       
    }
    else{                                                                   //패배
        if(dev_mode == true)printf("\nrunned by -1 (패배 판정)");
        p1lose++;
        res = -1;
    }

    stat[stat_stack] = res;

    if(dev_mode == true)printf("\n res : %d",res);
}

void output()
{
    if(dev_mode == false)system("cls"); 
    
    if(for_output_bugfix == false){                         //처음에 색 깨지는 버그 수정용.
        printf(ANSI_COLOR_BLUE"A"ANSI_COLOR_RESET);
        for_output_bugfix = true;
        system("cls");  
    }

    printing_output = true;

    printf("\n 당신은");
    if(player1_RSP==0)printf(" 바위를");else if(player1_RSP==1)printf(" 가위를");else printf(" 보를");
    printf(" 냈습니다.\n");

    printf("\n 컴퓨터는");
    if(player2_RSP==0)printf(" 바위를");else if(player2_RSP==1)printf(" 가위를");else printf(" 보를");
    printf(" 냈습니다.\n\n");
//    printf("┏━━━━");
    switch(res)
    {
        case 1:
            printf(ANSI_COLOR_GREEN"┏━━━━━┓""\n""┃ 승리┃""\n""┗━━━━━┛"ANSI_COLOR_RESET);
        //    printf("┃ 승리┃\n");
        //    printf("┗━━━━━┛"ANSI_COLOR_RESET);
            break;
        case 0:
            printf("┏━━━━━━━┓\n┃ 무승부┃\n┗━━━━━━━┛");
            break;
        case -1:
            printf(ANSI_COLOR_RED"┏━━━━━┓""\n""┃ 패배┃""\n""┗━━━━━┛"ANSI_COLOR_RESET);
            break;
        case -2:    
            printf(ANSI_COLOR_RED"┏━━━━━━━━━━━━━━┓""\n""┃ 패배 (반칙패)┃""\n""┗━━━━━━━━━━━━━━┛"ANSI_COLOR_RESET);
            break;
    }

}

void again()
{
    printf("\n\n 다시 하시겠습니까?(0/1) : ");
    printing_output = false;
    scanf("%d",&again_choose);
    if(again_choose == 0){
        printf("\n 가위바위보를 끝냅니다.");
        return 0;
    }
    else if(again_choose == 1){
        system("cls");
        if(dev_mode == true)
            dev_stage();
        else
            stage();
    }
}

void login_main()
{
    loginStart();
    loginplayer1();
}
void loginStart()
{
    printf(" 가위바위보 게임 로그인 .\n\n"ANSI_COLOR_BLUE" PLAYER1 로그인 선택\n\n"ANSI_COLOR_RESET" 1. 로그인 User1\n 2. 로그인 User2\n 3. 로그인 User3\n 4. 로그인 User4\n");
    scanf("%d",&playerSelect);
    playerSelect_check();
}

void playerSelect_check()
{
    if(playerSelect == 1||playerSelect == 2||playerSelect == 3||playerSelect == 4)
        player1 = playerSelect;
    else{
        printf("\n 다시 입력해주세요 : ");scanf("%d",&playerSelect);
        playerSelect_check();
    }
}

void loginplayer1()
{
    system("cls");printf("\n\n\n\n");
    pritnf(" ID > ");gets(loginID_Input);
    switch (player1)
    {
    case 1:
        FILE *playerIDfp = fopen("User1ID", "r");    // hello.txt 파일을 읽기 모드로 열기.  
                                             // 파일 포인터를 반환
        fgets(buffer, sizeof(buffer), playerIDfp);    // hello.txt에서 문자열을 읽음                                           
        if(loginID_Input == buffer){
            buffer = {NULL};
            printf("\n PassWord > ");gets(loginPW_Input);
            FILE *playerPWfp = fopen("User1PW", "r");


            fgets(buffer, sizeof(buffer), playerPWfp);
            if(loginPW_Input == buffer){
                break;
            }
            else{

            }
        }
        break;
    
    default:
        break;
    }
}

void stage()
{
    stats();
    start();
    input();
    process();
    output();
    stats();
    again();
}

void dev_stage()
{
    stats();
    dev_start();
    input();
    process();
    output();
    stats();
    again();
}
main()
{
    login();
    stage();
    system("cls");
    printf(" 당신의 최종 전적입니다. ");
}


// 바위 : 0
// 가위 : 1
//  보  : 2

// 컴퓨터의 가위바위보는 랜덤으로 배정하여 사용자의 가위바위보와 승부 출력
