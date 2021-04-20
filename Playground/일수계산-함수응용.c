#include <stdio.h>
#include <stdbool.h>

int did = 0;
int begin_year, begin_month, begin_day;
int cal_day;
int day, month, year;
main()
{
    bool status_1 = false;
    bool status_2 = false;
    printf(" 일수 계산 프로그램입니다.\n");
    printf(" 현재 상태입니다.\n 1. 간지 출력 : %s",status_1 ? "true"  : "false");
    printf(" 2. 윤달 적용 : %s\n",status_2 ? "true" : "false");

    input_start();

    printf("\n %d년 %d월 %d일에 대해\n %d일을 계산합니다.\n",begin_year,begin_month,begin_day,cal_day);
    printf("\n\n\n\n\n\n\n\n\n");

    // int begin_year, begin_month, begin_day;
    // printf(" 시작 연도를 입력하세요 : %d", begin_year);printf(" 시작 월을 입력하세요 : %d",begin_month);printf(" 시작 일을 입력하세요 : %d",begin_day);
    printf("thisisgospel");
}

int genji()
{
    
}

int cal_day_many()
{
    int
}   

/*                                                        
int begin_checker()
{
    char responce;

    scanf("%c",&responce);

    if(responce == 'Y'){
        printf("계산 일수를 입력하세요 : ");scanf("%d",cal_day);
    }
    if(responce == 'N'){
        input_start();
    }
    else
    {
        printf("다시 입력해주세요 : ");
        begin_checker();
    }
    
}
*/

int special_year(int begin_year)                                                                               // BACK
{
    if(begin_year % 400 == 0)
        return 1;

    if(begin_year % 4 == 0 && begin_year % 100 != 0)
        return 1;
    
    else
    {
        return 0;
    }
    
}

int input_start()
{

//    int begin_year, begin_month, begin_day;
//    int cal_day;
    printf("\n시작 연도를 입력하세요 : ");scanf("%d",&begin_year);


    printf("\n시작 월을 입력하세요 : ");scanf("%d",&begin_month);
    
    while(begin_month < 1 || begin_month > 12){
        printf("\n1~12월 사이로 입력해주세요 : ");scanf("%d",&begin_month);
    }
    int m = begin_month;
    printf("\n시작 일을 입력하세요 : ");scanf("%d",&begin_day);

    while(1){
        if(special_year(begin_year) == 1 && begin_month == 2){ // 윤달
            if(begin_day > 29 || begin_day < 1){
                printf("\n입력하셨던 달은 윤달입니다. 1~29일 중 하루를 입력해주세요 : ");scanf("%d",&begin_day);
                continue;
            }
        }

        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
            if(begin_day > 31 || begin_day < 1){
                printf("\n해당 일은 입력하신 달에 포함되어 있지 않은 일입니다. 1~31일 중 하루를 입력해주세요 : ");scanf("%d",&begin_day);
                continue;
            }
        }

        if(m==2||m==4||m==6||m==9||m==11){
            if(begin_day > 30 || begin_day < 1){
                printf("\n해당 일은 입력하신 달에 포함되어 있지 않은 일입니다. 1~30일 중 하루를 입력해주세요 : ");scanf("%d",&begin_day);
                continue;
            }
        }

        else
        {
            break;
        }
    }

    printf("\n 계산할 일수를 입력하세요 : ");scanf("%d",&cal_day);
}

int before_information()
{
    printf(" 처음 입력하신 날짜의 정보입니다. \n");
    printf(" 간지 : ");

    printf(" 윤년 여부 : ");
    printf(" 요일 : ");
    printf(" 그 해의 세령이 생일 요일 : ");
}