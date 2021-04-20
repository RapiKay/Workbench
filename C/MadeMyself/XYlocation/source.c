#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

#define col GetStdHandle(STD_OUTPUT_HANDLE)//�ܼ�â�� �ڵ� ������ ������
// ������ �������� ������ �Ʒ��� ���� ������ ��������
#define  Color_red SetConsoleTextAttribute(col,0x000c);//1����(red)
#define  Color_blue SetConsoleTextAttribute(col,0x0001 | 0x0008);//2�Ķ�(blue)
#define  Color_yellowgreen SetConsoleTextAttribute(col,0x00a);//3����(yellow green)
#define  Color_white SetConsoleTextAttribute(col,0x000f);//4���(white)
#define  Color_yellow SetConsoleTextAttribute(col,0x000e);//5���(yellow)
#define  Color_fluorescent SetConsoleTextAttribute(col,0x000d);//6������(fluorescent color)
#define  Color_gold SetConsoleTextAttribute(col,0x0006);//7�ݻ�(gold color)
#define  Color_plum SetConsoleTextAttribute(col,0x0005);//8���ֻ�(plum color)
#define  Color_blood SetConsoleTextAttribute(col,0x0004);//9�ǻ�(blood color)
#define  Color_green SetConsoleTextAttribute(col,0x0002);//10���(green)
#define  Color_purple SetConsoleTextAttribute(col,0x0001);//11�����(purple)

int Xlength = 0, Ylength = 0;
bool pointselect = false;
bool Aselect = false, Bselect = false;
int A_Xlocation, A_Ylocation, B_Xlocation, B_Ylocation;
int world[100][100];
int main()
{
    
    start();
    setup();
    while(true){
        process();
    }

}
/*
int setup()
{
    int **world = malloc(sizeof(int *) * Xlength);

    for (int i = 0; i < Xlength; i++)       
    {
        world[i] = malloc(sizeof(int) * Ylength);   
    }

    for (int i = 0; i < Xlength; i++)   
    {
        for (int j = 0; j < Ylength; j++)  
        {
            world[i][j] = 0;       
        }
    }
    
    return 0;
}
*/
int process()
{
    int choose;
    int truechoose = 0;

     while(truechoose = 1){
        highUI();middleUI();

        scanf("%d",&choose);
        
        switch (choose)
        {
        case 1:
            Ascan();
            truechoose++;
            break;

        case 2:
            Bscan();
            truechoose++;
            break;

        case 3:
            angle90();
            truechoose++;
            break;

        case 4:
            bestchoose();
            truechoose++;
            break;

        case 5:
            fxbestchoose();
            truechoose++;
            break;

        default:
            printf("\n 1~5 ���� ���� �Է����ּ��� : ");scanf("%d",&choose);
            break;
        }
    }
    system("cls");

    return 0;
}

int start()
{
    char checker;

    while(true){
        printf("\n\n\n ���� X ��ǥ �Է� : ");scanf("%d",&Xlength);
        system("cls");
        printf("\n\n\n ���� Y ��ǥ �Է� : ");scanf("%d",&Ylength);

        printf(" X ���� : %d \n Y ���� : %d \n\n �½��ϱ�? (Y/N) : ");scanf("%s",&checker);

        switch (checker)
        {
        case 'Y':
            return 0;
            break;
        
        case 'N':
            break;

        default:
            printf(" �ٽ� �Է� : ");scanf("%s",&checker);
            break;
        }
        system("cls");
    }
}

int highUI()
{
    printf(" Xlength : %d | Ylength : %d\n", Xlength,Ylength);
//    printf(" A����Ʈ : (%d,%d) | B����Ʈ : (%d,%d)",);
    return 0;
}

int middleUI()
{
    printf("\n 1. A����Ʈ �Է�\n 2. B����Ʈ �Է�");
    
    if(pointselect == true){Color_white;}else{Color_red;}
    
    printf("\n 3. 90�� ��� ���\n 4. ����ȭ ��� ���\n 5. �����Լ� ���� ����ȭ ��� ���");

    Color_white;

    printf("\n\n>>>");
    return 0;
}

int Ascan()
{
    printf(" A����Ʈ�� X��ǥ �Է� : ");scanf("%d",&A_Xlocation);
    printf("\n A����Ʈ�� Y��ǥ �Է� : ");scanf("%d",&A_Ylocation);

    Aselect = true;

    return 0;
}

int Bscan()
{
    printf(" B����Ʈ�� X��ǥ �Է� : ");scanf("%d",&B_Xlocation);
    printf("\n B����Ʈ�� Y��ǥ �Է� : ");scanf("%d",&B_Ylocation);

    Bselect = true;

    return 0;
}

int angle90()
{

    world[A_Xlocation][A_Ylocation] = 1;
    world[B_Xlocation][B_Ylocation] = 2;

    int i;
    if(A_Xlocation > B_Xlocation){
        for(i=A_Xlocation+1;i>B_Xlocation;i--){
            world[i][A_Ylocation] = 3;
        }
    }
    if(A_Xlocation < B_Xlocation){
        for(i=B_Xlocation+1;i>A_Xlocation;i--){
            world[i][A_Ylocation] = 3;
        }
    }

    if(A_Ylocation > B_Ylocation){
        
    }
}

int bestchoose()
{
 
}

int fxbestchoose()
{

}