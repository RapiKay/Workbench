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
#define User3PW "test3"
#define User4PW "test4"

#define User1Nick "irina_Kay"
#define User2Nick "Rapi_Kay"
#define User3Nick "Ereno_Letcode"
#define User4Nick "test"

#define hername "김세령"
#define hername2 "rlatpfud"
int com, me;
int res;
int again_choose;
int win[4] = {0, };
int draw[4] = {0, };
int lose[4] = {0, };
int special_lose[4] = {0, };
int playerSelect;
//int stat[1000][1000][1000] = {NULL};
int User;
int remain = 5;
int gameTry = 0;

int UserStat[1000] = {0, };     // 유저가 gameTry번째 게임에 낸 수
int ComputerStat[1000] = {0, };     // 컴퓨터가 gameTry번째 게임에 낸 수

char buffer[20];    // 파일을 읽을 때 사용할 임시 공간
char UserNickname[4][100] = {"irina_Kay", "Rapi_Kay", "Ereno_Letcode", "test"};

bool dev_mode = false;
bool for_output_bugfix = false;
bool printing_output = false;
bool login_fail = false;

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
    printf(" 승리 : %d\n 무승부 : %d\n 패배 : %d", win[User], draw[User], lose[User]);
    printf("\n  ┗━━ 반칙패 : %d\n\n\n\n",special_lose[User]);
}

void start()
{
    printf(" 어서오세요 %s님 !\n\n\n\n\n",UserNickname[User-1]);
    printf(" 가위바위보 게임입니다.\n");
    printf(" 바위 : 0 \n 가위 : 1 \n 보 : 2\n 이외의 경우는 반칙패로 처리됩니다.\n\n");
    printf(" 내고 싶으신 수를 입력해주세요 : ");
}

void dev_start()
{
    printf(" 어서오세요 %s님 !\n",UserNickname[User-1]);
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
    UserStat[gameTry] = me;
    ComputerStat[gameTry] = com;
    gameTry++;
}

int process()
{
    if(dev_mode == true){
        if(me == 11){
            res = 1;
            win[User]++;
            printf(ANSI_COLOR_GREEN"\n 승리 커맨드 작동됨"ANSI_COLOR_RESET);
            return 0;
        }
        if(me == 12){
            res = 0;
            draw[User]++;
            printf(ANSI_COLOR_GREEN"\n 무승부 커맨드 작동됨"ANSI_COLOR_RESET);
            return 0;
        }
        if(me == 13){
            res = -1;
            lose[User]++;
            printf(ANSI_COLOR_GREEN"\n 패배 커맨드 작동됨"ANSI_COLOR_RESET);
            return 0;
        }
        if(me == 14){
            res = -2;
            lose[User]++;
            printf(ANSI_COLOR_GREEN"\n 반칙패 커맨드 작동됨"ANSI_COLOR_RESET);
            return 0;
        }
    }
    if((me==0 && com==1) || (me==1 && com==2) || (me==2 && com==0)){        //승리
        res = 1;
        win[User]++;
    }
    else if(me==com){                                                       //무승부
        res = 0;
        draw[User]++;
    }   
    else if(me != 0 && me != 1 && me != 2){                                 //반칙패
        res = -2;
        special_lose[User]++;
        lose[User]++;                   
    }
    else{                                                                   //패배
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
    bool correct = false;
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
    else{
        while(correct == false){
            printf("\n\n 다시 입력해주세요 : ");scanf("%d", &again_choose);
            if(again_choose == 1 || again_choose == 0)
                correct = true;
        }
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
    int i;
    debug();
    login();
    if(login_fail == true)
        return 0;
    system("cls");
    stage();
    system("cls");
    printf("\n");
    for(i=3;i<=1;i--){
        printf("\n %d초 후 최종 결과 창으로 이동합니다.", i);
        Sleep(1000);
    }   

    lastprint();
}

int login()
{
    int ret;
    int i;
//    char loginID_Input[1000];
    char loginPW_Input[1000];

    printf(" 가위바위보 게임 로그인 화면\n\n" ANSI_COLOR_BLUE " 플레이어 로그인 선택\n\n" ANSI_COLOR_RESET " 1. 로그인 User1\n 2. 로그인 User2\n 3. 로그인 User3\n 4. 로그인 User4\n\n\n\n 유저 선택 > ");
    scanf("%d", &playerSelect);

    if(playerSelect == 33){
        EasterEgg();
        return 0;
    }

    while(1){
        if(playerSelect == 1 || playerSelect == 2||playerSelect == 3||playerSelect == 4){
        User = playerSelect;
        break;
        }

    else{
        printf("\n 해당하는 값의 유저가 없습니다. 다시 입력해주세요 : ");scanf("%d",&playerSelect);
        }   
    }

    system("cls");
    printf("\n\n\n\n\n\n");

    printf(ANSI_COLOR_RESET " Password > ");
    scanf("%s", loginPW_Input);
    
    remain = 5;

    while(1){
        switch(User)
        {

        case 1:
            ret = strcmp(User1PW, loginPW_Input);
            break;

        case 2:
            ret = strcmp(User2PW, loginPW_Input);
            break;

        case 3:
            ret = strcmp(User3PW, loginPW_Input);
            break;
        
        case 4:
            ret = strcmp(User1PW, loginPW_Input);
            break;
        }

        if(ret == 0){
            break;
        }
        else{
            if(remain <= 0){
                for(i=3;i>=1;i--){
                    system("cls");
                    printf("\n\n\n"ANSI_COLOR_RED" 로그인 시도 횟수를 모두 소모하셨습니다."ANSI_COLOR_RESET"\n"" %d초 후 프로그램이 강제 종료됩니다. ",i);
                    Sleep(1000);
                }
                system("cls");
                printf("\n\n\n\n PW 입력 횟수를 초과하여 프로그램이 강제 종료 되었습니다.\n 프로그램을 재실행하여 다시 로그인 시도를 하실 수 있습니다.");
                login_fail = true;
                return 0;
            }
            else{
                system("cls");
                printf(ANSI_COLOR_RED "\n\n\n\n PW가 일치하지 않습니다! 다시 시도해주세요\n 남은 시도 횟수 : %d\n"ANSI_COLOR_RESET,remain);
                printf("\n PW > ");
                remain--;
                scanf("%s",loginPW_Input);
            }
        }
    }    
}

int lastprint()        // 최종 전적을 print해주는 함수
{
    int i;

    printf("\n\n\n\n 당신의 최종 전적입니다.");

    for(i=0;i<=gameTry;i++){
        printf("\n\n");
        printf(" 승리 횟수 : %d\n",win[User]);printf(" 무승부 횟수 : %d\n",draw[User]);printf(" 패배 횟수 : %d\n",lose[User]);printf("  ┗━━ 반칙패 : %d",special_lose[User]);
    }
}

int EasterEgg()
{
    int res, howmany;
    int i, j;
    char egg[7];
    char end[100] = {"なんで。。君がここにいるの？"};
    int turn = 0;

    srand(time(NULL));
    printf("君の名は。  ");
    scanf("%s", egg);

    res = strcmp(hername, egg);

    if(res != 0){
        res = strcmp(hername2, egg);
    }
    
    if(res == 0){
        system("cls");
        Sleep(2000);
        printf("\n\n\n\n    사랑해");
        Sleep(2000);
        printf("       진심으로");

        login_fail = true;
        return 0;
    }

    else{
        system("cls");
        Sleep(500);
        printf("\n\n\n\n");

        for(i=0;i<=5;i++)
        {
            printf("。");
            Sleep(700);
            }
        
        printf("\n\n\n");
        
        for(i=0;end[i]!=NULL;i++){
            printf("%c",end[i]);
            Sleep(200);
        }
        printf("\n\n\n");
        Sleep(1000);

        printf(ANSI_COLOR_RED"D");Sleep(600);printf("I");Sleep(600);printf("E ");Sleep(2000);
        for(i=6;i>=0;i--){
            howmany = 100 * i;
            printf("DIE ");
            Sleep(howmany);
            printf("DIE ");
            Sleep(howmany);
        }
        
        i = 0;

        while(i<30){
            printf("DIE ");
            Sleep(10);
        }

        while(1){
            printf("DIE ");
        }
        login_fail = true;
    }
}
