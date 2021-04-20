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
/*
#define User1ID "test1"
#define User2ID "test2"
#define User3ID "test3"
#define User4ID "test4"
*/
#define User1PW "test1"
#define User2PW "test2"
#define User3PW "test3"
#define User4PW "test4"

#define User1Nick "irina_Kay"
#define User2Nick "Rapi_Kay"
#define User3Nick "Ereno_Letcode"
#define User4Nick "test"

bool login_fail = false;
int playerSelect;
int User;
int remain = 5;

main()
{
    printf(ANSI_COLOR_BLUE"A"ANSI_COLOR_RESET);
    system("cls");
    login();
    if(login_fail == true)
        return 0;
}

int login()
{
    int ret;
    int i;
//    char loginID_Input[1000];
    char loginPW_Input[1000];

    printf(" 가위바위보 게임 로그인 화면\n\n" ANSI_COLOR_BLUE " 플레이어 로그인 선택\n\n" ANSI_COLOR_RESET " 1. 로그인 User1\n 2. 로그인 User2\n 3. 로그인 User3\n 4. 로그인 User4\n\n\n\n 유저 선택 > ");
    scanf("%d",&playerSelect);

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
                printf("\n\n\n\n 프로그램이 강제종료 되었습니다.\n 사유 : PW 입력 시도 횟수 초과");
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

    printf("\n\n %s님 어서오세요!", User1Nick);

    
}
