#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define User1ID "test1"
#define User2ID "test2"
#define User3ID "test3"
#define User4ID "test4"

#define User1PW "test1"
#define User2PW "test2"
#define User3Pw "test3"
#define User4PW "test4"

int com, me;
int res;
int again_choose;
int win[4];
int draw[4];
int lose[4];
int special_lose[4];
int playerSelect;
//int stat[1000][1000][1000] = {NULL};
int stat_stack = 1;
int User;

char loginID_Input[100],loginPW_Input[100];
char buffer[20];    // 파일을 읽을 때 사용할 임시 공간

bool dev_mode = false;
bool for_output_bugfix = false;
bool printing_output = false;
bool ID_correct = false;
bool PW_correct = false;

void debug()
{
    printf(ANSI_COLOR_BLUE"A"ANSI_COLOR_RESET);
    system("cls");
}
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
    printf("\n\n 당신의 현 전적입니다.\n \n");
    printf(" 승리 : %d\n 무승부 : %d\n 패배 : %d", win, draw, lose);
    printf("\n  ┗━━ 반칙패 : %d\n\n\n\n\n\n\n\n",special_lose);
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
    srand(time(NULL));
    scanf("%d",&me);
    if(dev_mode == true)printf("    scaned %d\n", me);
    com = rand()%3;
    if(me == 33)dev_mode_start();
}

int process()
{
    if(dev_mode == true){
        if(me == 11){
            res = 1;
            win[User]++;
            printf("\n 승리 커맨드 작동됨");
            return 0;
        }
        if(me == 12){
            res = 0;
            draw[User]++;
            printf("\n 무승부 커맨드 작동됨");
            return 0;
        }
        if(me == 13){
            res = -1;
            lose[User]++;
            printf("\n 패배 커맨드 작동됨");
            return 0;
        }
        if(me == 14){
            res = -2;
            lose[User]++;
            printf("\n 반칙패 커맨드 작동됨");
            return 0;
        }
    }
    if((me==0 && com==1) || (me==1 && com==2) || (me==2 && com==0)){        //승리
        res = 1;
        win[User]++;
        if(dev_mode == true)printf("\n runned by 1 (승리 판정)");
    }
    else if(me==com){                                                       //무승부
        res = 0;
        draw[User]++;
        if(dev_mode == true)printf("\n runned by 0 (무승부 판정)");
    }   
    else if(me != 0 && me != 1 && me != 2){                                 //반칙패
        res = -2;
        special_lose[User]++;
        lose[User]++;
        if(dev_mode == true)printf("\nrunned by -2 (반칙패 판정)");                       
    }
    else{                                                                   //패배
        if(dev_mode == true)printf("\nrunned by -1 (패배 판정)");
        lose[User]++;
        res = -1;
    }

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
    if(me==0)printf(" 바위를");else if(me==1)printf(" 가위를");else printf(" 보를");
    printf(" 냈습니다.\n");

    printf("\n 컴퓨터는");
    if(com==0)printf(" 바위를");else if(com==1)printf(" 가위를");else printf(" 보를");
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

int again()
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

int stage()
{
    stats();
    start();
    input();
    process();
    output();
    stats();
    again();
}

int dev_stage()
{
    stats();
    dev_start();
    input();
    process();
    output();
    stats();
    again();
}

int main()
{
	int gamePlay;
    debug();
    printf("1 : 게임시작\n2 : 게임종료");
    scanf("%d", &gamePlay);
    if(gamePlay == 1){
    	printf("로그인 페이지로 넘어갑니다.");
    	Sleep(2000); 
    	login_main();
	}
    
    system("cls");
    printf(" 당신의 최종 전적입니다. ");
}

int login_main()
{
    loginStart();
    loginplayer_ID();
    
    if(ID_correct == true){
        loginplayer_PW();
        if(PW_correct == true){
            stage();
        }
    }
}

int loginStart()
{
    printf(" 가위바위보 게임 로그인 화면\n\n" ANSI_COLOR_BLUE " 플레이어 로그인 선택\n\n" ANSI_COLOR_RESET " 1. 로그인 User1\n 2. 로그인 User2\n 3. 로그인 User3\n 4. 로그인 User4\n\n\n\n 유저 선택 > ");
    scanf("%d", &playerSelect);
    playerSelect_check();
    return;
}

int playerSelect_check()
{
    if(playerSelect == 1 || playerSelect == 2||playerSelect == 3||playerSelect == 4){
        User = playerSelect;
        return 1;
    }

    else{
        printf("\n 해당하는 값의 유저가 없습니다. 다시 입력해주세요 : ");scanf("%d",&playerSelect);
        playerSelect_check();
    }
}

bool loginplayer_ID_First = true;

int loginplayer_ID()
{
    int remain = 5;
    int ret;
    if(loginplayer_ID_First == true){
        system("cls");
        printf("\n\n\n\n");
    }

    printf(ANSI_COLOR_RESET "\n ID > ");gets(loginID_Input);

    switch (User)
    {
    case 1:
        ret = strcmp(User1ID, loginID_Input);
        if(ret = 0){
            ID_correct = true;
            return;
        }
        break;
    
    case 2:
        ret = strcmp(User2ID, loginID_Input);
        if(ret = 0){
            ID_correct = true;
            return;
        }
        break;
    
    case 3:
        ret = strcmp(User3ID, loginID_Input);
        if(ret = 0){
            ID_correct == true;
            return;
        }
        break;

    case 4:
        ret = strcmp(User4ID, loginID_Input);
        if(ret = 0){
            ID_correct == true;
            return;
        }
        break;
    
    printf(ANSI_COLOR_RED "남은 시도 횟수 : %d ID가 일치하지 않습니다! 다시 시도해주세요",remain);
    remain--;
    loginplayer_ID();  
    }
/*
    switch (User)
    {
        case 1:
            FILE *playerIDfp = fopen("User1ID", "r");    // User1ID.txt 파일을 읽기 모드로 열기.  
                                             // 파일 포인터를 반환
            fgets(buffer, sizeof(buffer), playerIDfp);    // User1ID.txt에서 문자열을 읽음                                           
            if(loginID_Input == buffer){
                ID_correct =    true;
            }
            fclose(playerIDfp);
            break;
        case 2:
            FILE *playerIDfp = fopen("User2ID", "r");    
                                            
            fgets(buffer, sizeof(buffer), playerIDfp);                                 
            if(loginID_Input == buffer){
                ID_correct = true;
            }
            fclose(playerIDfp);
            break;
        case 3:
            FILE *playerIDfp = fopen("User3ID", "r");   
                                           
            fgets(buffer, sizeof(buffer), playerIDfp);                                             
            if(loginID_Input == buffer){
                ID_correct = true;
            }
            fclose(playerIDfp);
            break;
        case 4:
            FILE *playerIDfp = fopen("User4ID", "r");    
                                           
            fgets(buffer, sizeof(buffer), playerIDfp);                                           
            if(loginID_Input == buffer){
                ID_correct = true;
            }
            fclose(playerIDfp);
            break;
    }
    */
}

int loginplayer_PW()
{
    printf(" PassWord > ");gets(loginPW_Input);
    return 0;
/*
    switch (User)   
    {
        case 1:
            FILE *playerIDfp = fopen("User1PW", "r");    // User1PW.txt 파일을 읽기 모드로 열기.  
                                             // 파일 포인터를 반환
            fgets(buffer, sizeof(buffer), playerIDfp);    // User1ID.txt에서 문자열을 읽음                                           
            if(loginID_Input == buffer){
                PW_correct = true;
            break;
            }
        case 2:
            FILE *playerIDfp = fopen("User2PW", "r");    
                                            
            fgets(buffer, sizeof(buffer), playerIDfp);                                 
            if(loginID_Input == buffer){
                PW_correct = true;
                break;
            }
        case 3:
            FILE *playerIDfp = fopen("User3PW", "r");   
                                           
            fgets(buffer, sizeof(buffer), playerIDfp);                                             
            if(loginID_Input == buffer){
                PW_correct = true;
                break;
            }
        case 4:
            FILE *playerIDfp = fopen("User4PW", "r");    
                                           
            fgets(buffer, sizeof(buffer), playerIDfp);                                           
            if(loginID_Input == buffer){
                PW_correct = true;
                break;
            }
    
    }
    */
}

// 바위 : 0
// 가위 : 1
//  보  : 2

// 컴퓨터의 가위바위보는 랜덤으로 배정하여 사용자의 가위바위보와 승부 출력
