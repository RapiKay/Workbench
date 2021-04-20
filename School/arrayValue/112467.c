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

// 데이터를 입력 받을 배열의 자료형을 char로 바꿔볼 것.
//  ㄴ 정수&개행문자를 동시에 입력받기 위함
//  ㄴ 입력을 받은 후 char형을 int형으로 바꾸는 과정을 넣을 것

int input;
int DataCount = 0;         //DataCount + 1 이 데이터의 갯수임.
//int data[1000] = {NULL};
int average;

char data[1000] = {NULL};

bool minValue = true;       // 최솟값
bool maxValue = true;       // 최댓값
bool avgValue = true;       // 평균값
bool BelowavgValue = true;  // 평균이하값
bool Ascending = true;      // 오름차순 정렬
bool Descending = true;     // 내림차순 정렬
/*
void Value_select_status()
{
    if()
}
*/
void Value_select_start()
{
    printf(" 데이터 정렬 프로그램입니다.\n 정렬 옵션 중 제외할 옵션을 입력해주세요 > ");
}

void Data_input()
{
    printf(ANSI_COLOR_GREEN " 입력하실 데이터가 없으면 Enter를 입력하세요\n 문자는 자동으로 int값으로 변환됩니다.\n");
    while(true){
        printf(ANSI_COLOR_RESET " 입력할 데이터를 입력하세요 (%d) > ", DataCount + 1);
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
    printf(" 평균 이하의 데이터 값은 > ");
    for(i=0;i<=DataCount;i++){
        if(data[i] <= average){
            Sleep(1000);
            printf(" %d ",data[i]);
        }
    }
    printf("입니다.");
}

void fAscending()
{

}

void fDescending()
{

}
