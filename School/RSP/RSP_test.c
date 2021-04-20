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
char buffer[20];    // ������ ���� �� ����� �ӽ� ����

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
    printf(" �¸� : %d\n ���º� : %d\n �й� : %d", win, draw, lose);
    printf("\n  ������ ��Ģ�� : %d\n\n\n\n\n\n\n\n",special_lose);
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
            printf("\n �¸� Ŀ�ǵ� �۵���");
            return 0;
        }
        if(me == 12){
            res = 0;
            draw[User]++;
            printf("\n ���º� Ŀ�ǵ� �۵���");
            return 0;
        }
        if(me == 13){
            res = -1;
            lose[User]++;
            printf("\n �й� Ŀ�ǵ� �۵���");
            return 0;
        }
        if(me == 14){
            res = -2;
            lose[User]++;
            printf("\n ��Ģ�� Ŀ�ǵ� �۵���");
            return 0;
        }
    }
    if((me==0 && com==1) || (me==1 && com==2) || (me==2 && com==0)){        //�¸�
        res = 1;
        win[User]++;
        if(dev_mode == true)printf("\n runned by 1 (�¸� ����)");
    }
    else if(me==com){                                                       //���º�
        res = 0;
        draw[User]++;
        if(dev_mode == true)printf("\n runned by 0 (���º� ����)");
    }   
    else if(me != 0 && me != 1 && me != 2){                                 //��Ģ��
        res = -2;
        special_lose[User]++;
        lose[User]++;
        if(dev_mode == true)printf("\nrunned by -2 (��Ģ�� ����)");                       
    }
    else{                                                                   //�й�
        if(dev_mode == true)printf("\nrunned by -1 (�й� ����)");
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
    printf("1 : ���ӽ���\n2 : ��������");
    scanf("%d", &gamePlay);
    if(gamePlay == 1){
    	printf("�α��� �������� �Ѿ�ϴ�.");
    	Sleep(2000); 
    	login_main();
	}
    
    system("cls");
    printf(" ����� ���� �����Դϴ�. ");
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
    printf(" ���������� ���� �α��� ȭ��\n\n" ANSI_COLOR_BLUE " �÷��̾� �α��� ����\n\n" ANSI_COLOR_RESET " 1. �α��� User1\n 2. �α��� User2\n 3. �α��� User3\n 4. �α��� User4\n\n\n\n ���� ���� > ");
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
        printf("\n �ش��ϴ� ���� ������ �����ϴ�. �ٽ� �Է����ּ��� : ");scanf("%d",&playerSelect);
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
    
    printf(ANSI_COLOR_RED "���� �õ� Ƚ�� : %d ID�� ��ġ���� �ʽ��ϴ�! �ٽ� �õ����ּ���",remain);
    remain--;
    loginplayer_ID();  
    }
/*
    switch (User)
    {
        case 1:
            FILE *playerIDfp = fopen("User1ID", "r");    // User1ID.txt ������ �б� ���� ����.  
                                             // ���� �����͸� ��ȯ
            fgets(buffer, sizeof(buffer), playerIDfp);    // User1ID.txt���� ���ڿ��� ����                                           
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
            FILE *playerIDfp = fopen("User1PW", "r");    // User1PW.txt ������ �б� ���� ����.  
                                             // ���� �����͸� ��ȯ
            fgets(buffer, sizeof(buffer), playerIDfp);    // User1ID.txt���� ���ڿ��� ����                                           
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

// ���� : 0
// ���� : 1
//  ��  : 2

// ��ǻ���� ������������ �������� �����Ͽ� ������� ������������ �º� ���
