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

#define hername "�輼��"
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

int UserStat[1000] = {0, };     // ������ gameTry��° ���ӿ� �� ��
int ComputerStat[1000] = {0, };     // ��ǻ�Ͱ� gameTry��° ���ӿ� �� ��

char buffer[20];    // ������ ���� �� ����� �ӽ� ����
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
    printf("\n ���� ��� ���� ");
    printf("\n\n 3�� �� ���������� ���� â���� ���ư��ϴ�. ");
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

    printf("\n\n ����� �� �����Դϴ�.\n \n");
    printf(" �¸� : %d\n ���º� : %d\n �й� : %d", win[User], draw[User], lose[User]);
    printf("\n  ������ ��Ģ�� : %d\n\n\n\n",special_lose[User]);
}

void start()
{
    printf(" ������� %s�� !\n\n\n\n\n",UserNickname[User-1]);
    printf(" ���������� �����Դϴ�.\n");
    printf(" ���� : 0 \n ���� : 1 \n �� : 2\n �̿��� ���� ��Ģ�з� ó���˴ϴ�.\n\n");
    printf(" ���� ������ ���� �Է����ּ��� : ");
}

void dev_start()
{
    printf(" ������� %s�� !\n",UserNickname[User-1]);
    printf(" ���������� ���� ���߸�� �Դϴ�.\n");
    printf(" ���� : 0 \n ���� : 1 \n �� : 2\n �¸� : 11 \n ���º� : 12\n �й� : 13\n �̿��� ���� ��Ģ�з� ó���˴ϴ�.\n\n");
    printf(" ���� ������ ���� �Է����ּ��� : ");
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
            printf(ANSI_COLOR_GREEN"\n �¸� Ŀ�ǵ� �۵���"ANSI_COLOR_RESET);
            return 0;
        }
        if(me == 12){
            res = 0;
            draw[User]++;
            printf(ANSI_COLOR_GREEN"\n ���º� Ŀ�ǵ� �۵���"ANSI_COLOR_RESET);
            return 0;
        }
        if(me == 13){
            res = -1;
            lose[User]++;
            printf(ANSI_COLOR_GREEN"\n �й� Ŀ�ǵ� �۵���"ANSI_COLOR_RESET);
            return 0;
        }
        if(me == 14){
            res = -2;
            lose[User]++;
            printf(ANSI_COLOR_GREEN"\n ��Ģ�� Ŀ�ǵ� �۵���"ANSI_COLOR_RESET);
            return 0;
        }
    }
    if((me==0 && com==1) || (me==1 && com==2) || (me==2 && com==0)){        //�¸�
        res = 1;
        win[User]++;
    }
    else if(me==com){                                                       //���º�
        res = 0;
        draw[User]++;
    }   
    else if(me != 0 && me != 1 && me != 2){                                 //��Ģ��
        res = -2;
        special_lose[User]++;
        lose[User]++;                   
    }
    else{                                                                   //�й�
        lose[User]++;
        res = -1;
    }

    if(dev_mode == true)printf("\n res : %d",res);
}

void output()
{
    if(dev_mode == false)system("cls"); 
    
    if(for_output_bugfix == false){                         //ó���� �� ������ ���� ������.
        printf(ANSI_COLOR_BLUE"A"ANSI_COLOR_RESET);
        for_output_bugfix = true;
        system("cls");  
    }

    printing_output = true;

    printf("\n �����");
    if(me==0)printf(" ������");else if(me==1)printf(" ������");else printf(" ����");
    printf(" �½��ϴ�.\n");

    printf("\n ��ǻ�ʹ�");
    if(com==0)printf(" ������");else if(com==1)printf(" ������");else printf(" ����");
    printf(" �½��ϴ�.\n\n");
//    printf("����������");
    switch(res)
    {
        case 1:
            printf(ANSI_COLOR_GREEN"��������������""\n""�� �¸���""\n""��������������"ANSI_COLOR_RESET);
        //    printf("�� �¸���\n");
        //    printf("��������������"ANSI_COLOR_RESET);
            break;
        case 0:
            printf("������������������\n�� ���ºΦ�\n������������������");
            break;
        case -1:
            printf(ANSI_COLOR_RED"��������������""\n""�� �й覭""\n""��������������"ANSI_COLOR_RESET);
            break;
        case -2:
            printf(ANSI_COLOR_RED"��������������������������������""\n""�� �й� (��Ģ��)��""\n""��������������������������������"ANSI_COLOR_RESET);
            break;
    }

}

int again()
{
    bool correct = false;
    printf("\n\n �ٽ� �Ͻðڽ��ϱ�?(0/1) : ");
    printing_output = false;
    scanf("%d",&again_choose);
    if(again_choose == 0){
        printf("\n ������������ �����ϴ�.");
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
            printf("\n\n �ٽ� �Է����ּ��� : ");scanf("%d", &again_choose);
            if(again_choose == 1 || again_choose == 0)
                correct = true;
        }
        if(again_choose == 0){
            printf("\n ������������ �����ϴ�.");
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
        printf("\n %d�� �� ���� ��� â���� �̵��մϴ�.", i);
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

    printf(" ���������� ���� �α��� ȭ��\n\n" ANSI_COLOR_BLUE " �÷��̾� �α��� ����\n\n" ANSI_COLOR_RESET " 1. �α��� User1\n 2. �α��� User2\n 3. �α��� User3\n 4. �α��� User4\n\n\n\n ���� ���� > ");
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
        printf("\n �ش��ϴ� ���� ������ �����ϴ�. �ٽ� �Է����ּ��� : ");scanf("%d",&playerSelect);
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
                    printf("\n\n\n"ANSI_COLOR_RED" �α��� �õ� Ƚ���� ��� �Ҹ��ϼ̽��ϴ�."ANSI_COLOR_RESET"\n"" %d�� �� ���α׷��� ���� ����˴ϴ�. ",i);
                    Sleep(1000);
                }
                system("cls");
                printf("\n\n\n\n PW �Է� Ƚ���� �ʰ��Ͽ� ���α׷��� ���� ���� �Ǿ����ϴ�.\n ���α׷��� ������Ͽ� �ٽ� �α��� �õ��� �Ͻ� �� �ֽ��ϴ�.");
                login_fail = true;
                return 0;
            }
            else{
                system("cls");
                printf(ANSI_COLOR_RED "\n\n\n\n PW�� ��ġ���� �ʽ��ϴ�! �ٽ� �õ����ּ���\n ���� �õ� Ƚ�� : %d\n"ANSI_COLOR_RESET,remain);
                printf("\n PW > ");
                remain--;
                scanf("%s",loginPW_Input);
            }
        }
    }    
}

int lastprint()        // ���� ������ print���ִ� �Լ�
{
    int i;

    printf("\n\n\n\n ����� ���� �����Դϴ�.");

    for(i=0;i<=gameTry;i++){
        printf("\n\n");
        printf(" �¸� Ƚ�� : %d\n",win[User]);printf(" ���º� Ƚ�� : %d\n",draw[User]);printf(" �й� Ƚ�� : %d\n",lose[User]);printf("  ������ ��Ģ�� : %d",special_lose[User]);
    }
}

int EasterEgg()
{
    int res, howmany;
    int i, j;
    char egg[7];
    char end[100] = {"�ʪ�ǡ����֪������˪���Σ�"};
    int turn = 0;

    srand(time(NULL));
    printf("�֪�٣�ϡ�  ");
    scanf("%s", egg);

    res = strcmp(hername, egg);

    if(res != 0){
        res = strcmp(hername2, egg);
    }
    
    if(res == 0){
        system("cls");
        Sleep(2000);
        printf("\n\n\n\n    �����");
        Sleep(2000);
        printf("       ��������");

        login_fail = true;
        return 0;
    }

    else{
        system("cls");
        Sleep(500);
        printf("\n\n\n\n");

        for(i=0;i<=5;i++)
        {
            printf("��");
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
