#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

// �����͸� �Է� ���� �迭�� �ڷ����� char�� �ٲ㺼 ��.
//  �� ����&���๮�ڸ� ���ÿ� �Է¹ޱ� ����
//  �� �Է��� ���� �� char���� int������ �ٲٴ� ������ ���� ��

int input;
int DataCount = 0;         //DataCount + 1 �� �������� ������.
//int data[1000] = {NULL};
int average;

char data[1000] = {NULL};

bool minValue = true;       // �ּڰ�
bool maxValue = true;       // �ִ�
bool avgValue = true;       // ��հ�
bool BelowavgValue = true;  // ������ϰ�
bool Ascending = true;      // �������� ����
bool Descending = true;     // �������� ����
/*
void Value_select_status()
{
    if()
}
*/
void Value_select_start()
{
    printf(" ������ ���� ���α׷��Դϴ�.\n ���� �ɼ� �� ������ �ɼ��� �Է����ּ��� > ");
}

void Data_input()
{
    printf(ANSI_COLOR_GREEN " �Է��Ͻ� �����Ͱ� ������ Enter�� �Է��ϼ���\n ���ڴ� �ڵ����� int������ ��ȯ�˴ϴ�.\n");
    while(true){
        printf(ANSI_COLOR_RESET " �Է��� �����͸� �Է��ϼ��� (%d) > ", DataCount + 1);
        scanf("%[^\n]", data[DataCount]);
        if(data[DataCount] == 10)
            break;
        DataCount++;
    }
}

main()
{
    printf(ANSI_COLOR_BLUE"A"ANSI_COLOR_RESET);
    system("cls");
    printf("\n\n\n\n\n\n");
    Data_input();
    process();

}

void process()
{
    if(minValue == true)fminValue();
    
    if(maxValue == true)fmaxValue();
    
    if(avgValue == true)favgValue();
    
    if(BelowavgValue == true)fBelowavgValue();

    if(Ascending == true)fAscending();

    if(Descending == true)fDescending();
}

void fminValue()
{
    int i;
    int tmp = data[0];
    for(i=1;i<=DataCount;i++){
        if(tmp > data[i])
            tmp = data[i];
    }
}

void fmaxValue()
{
    int i;
    int tmp = data[0];
    for(i=1;i<=DataCount;i++){
        if(tmp < data[i])
       
tmp = data[i];
    }
}

void favgValue()
{
    int i;
    int total = 0;
    for(i=0;i<=DataCount;i++){
        total += data[i];
    }

    average = total / (DataCount + 1);
}

void fBelowavgValue()
{
    int i;
    printf(" ��� ������ ������ ���� > ");
    for(i=0;i<=DataCount;i++){
        if(data[i] <= average){
            Sleep(1000);
            printf(" %d ",data[i]);
        }
    }
    printf("�Դϴ�.");
}

void fAscending()
{

}

void fDescending()
{

}
