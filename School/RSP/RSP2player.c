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
int stat[1000][1000][1000] = {NULL};            // �÷��̾� 1 , �÷��̾� 2, ���� �¸�?
int stat_stack = 1;

char loginID_Input[100],loginPW_Input[100];
char buffer[20];    // ������ ���� �� ����� �ӽ� ����

bool dev_mode = false;
bool for_output_bugfix = false;
bool printing_output = false;

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
    printf("\n\n PLAYER1�� �� �����Դϴ�.\n \n");
    printf(" �¸� : %d\n ���º� : %d\n �й� : %d", p1win, p1draw, p1lose);
    printf("\n  ������ ��Ģ�� : %d\n\n\n\n\n\n\n\n",p1special_lose);
}

void start()
{
    printf(" ���������� �����Դϴ�.\n");
    printf(" ���� : 0 \n ���� : 1 \n �� : 2\n �̿��� ���� ��Ģ�з� ó���˴ϴ�.\n\n");
    printf(" ���� ������ ���� �Է����ּ��� : ");
}

void dev_start()
{
    printf(" ���������� ���� ���߸�� �Դϴ�.\n");
    printf(" ���� : 0 \n ���� : 1 \n �� : 2\n �¸� : 11 \n ���º� : 12\n �й� : 13\n �̿��� ���� ��Ģ�з� ó���˴ϴ�.\n\n");
    printf(" ���� ������ ���� �Է����ּ��� : ");
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
    if((player1_RSP==0 && player2_RSP==1) || (player1_RSP==1 && player2_RSP==2) || (player1_RSP==2 && player2_RSP==0)){        //�¸�
        res = 1;
        p1win++;
        if(dev_mode == true)printf("\n runned by 1 (�¸� ����)");
    }
    else if(player1_RSP==player2_RSP){                                                       //���º�
        res = 0;
        p1draw++;
        if(dev_mode == true)printf("\n runned by 0 (���º� ����)");
    }   
    else if(player1_RSP != 0 && player1_RSP != 1 && player1_RSP != 2){                                 //��Ģ��
        res = -2;
        special_lose++;
        p1lose++;
        if(dev_mode == true)printf("\nrunned by -2 (��Ģ�� ����)");                       
    }
    else{                                                                   //�й�
        if(dev_mode == true)printf("\nrunned by -1 (�й� ����)");
        p1lose++;
        res = -1;
    }

    stat[stat_stack] = res;

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
    if(player1_RSP==0)printf(" ������");else if(player1_RSP==1)printf(" ������");else printf(" ����");
    printf(" �½��ϴ�.\n");

    printf("\n ��ǻ�ʹ�");
    if(player2_RSP==0)printf(" ������");else if(player2_RSP==1)printf(" ������");else printf(" ����");
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

void again()
{
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
}

void login_main()
{
    loginStart();
    loginplayer1();
}
void loginStart()
{
    printf(" ���������� ���� �α��� .\n\n"ANSI_COLOR_BLUE" PLAYER1 �α��� ����\n\n"ANSI_COLOR_RESET" 1. �α��� User1\n 2. �α��� User2\n 3. �α��� User3\n 4. �α��� User4\n");
    scanf("%d",&playerSelect);
    playerSelect_check();
}

void playerSelect_check()
{
    if(playerSelect == 1||playerSelect == 2||playerSelect == 3||playerSelect == 4)
        player1 = playerSelect;
    else{
        printf("\n �ٽ� �Է����ּ��� : ");scanf("%d",&playerSelect);
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
        FILE *playerIDfp = fopen("User1ID", "r");    // hello.txt ������ �б� ���� ����.  
                                             // ���� �����͸� ��ȯ
        fgets(buffer, sizeof(buffer), playerIDfp);    // hello.txt���� ���ڿ��� ����                                           
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
    printf(" ����� ���� �����Դϴ�. ");
}


// ���� : 0
// ���� : 1
//  ��  : 2

// ��ǻ���� ������������ �������� �����Ͽ� ������� ������������ �º� ���
