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
    printf(" �ϼ� ��� ���α׷��Դϴ�.\n");
    printf(" ���� �����Դϴ�.\n 1. ���� ��� : %s",status_1 ? "true"  : "false");
    printf(" 2. ���� ���� : %s\n",status_2 ? "true" : "false");

    input_start();

    printf("\n %d�� %d�� %d�Ͽ� ����\n %d���� ����մϴ�.\n",begin_year,begin_month,begin_day,cal_day);
    printf("\n\n\n\n\n\n\n\n\n");

    // int begin_year, begin_month, begin_day;
    // printf(" ���� ������ �Է��ϼ��� : %d", begin_year);printf(" ���� ���� �Է��ϼ��� : %d",begin_month);printf(" ���� ���� �Է��ϼ��� : %d",begin_day);
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
        printf("��� �ϼ��� �Է��ϼ��� : ");scanf("%d",cal_day);
    }
    if(responce == 'N'){
        input_start();
    }
    else
    {
        printf("�ٽ� �Է����ּ��� : ");
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
    printf("\n���� ������ �Է��ϼ��� : ");scanf("%d",&begin_year);


    printf("\n���� ���� �Է��ϼ��� : ");scanf("%d",&begin_month);
    
    while(begin_month < 1 || begin_month > 12){
        printf("\n1~12�� ���̷� �Է����ּ��� : ");scanf("%d",&begin_month);
    }
    int m = begin_month;
    printf("\n���� ���� �Է��ϼ��� : ");scanf("%d",&begin_day);

    while(1){
        if(special_year(begin_year) == 1 && begin_month == 2){ // ����
            if(begin_day > 29 || begin_day < 1){
                printf("\n�Է��ϼ̴� ���� �����Դϴ�. 1~29�� �� �Ϸ縦 �Է����ּ��� : ");scanf("%d",&begin_day);
                continue;
            }
        }

        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
            if(begin_day > 31 || begin_day < 1){
                printf("\n�ش� ���� �Է��Ͻ� �޿� ���ԵǾ� ���� ���� ���Դϴ�. 1~31�� �� �Ϸ縦 �Է����ּ��� : ");scanf("%d",&begin_day);
                continue;
            }
        }

        if(m==2||m==4||m==6||m==9||m==11){
            if(begin_day > 30 || begin_day < 1){
                printf("\n�ش� ���� �Է��Ͻ� �޿� ���ԵǾ� ���� ���� ���Դϴ�. 1~30�� �� �Ϸ縦 �Է����ּ��� : ");scanf("%d",&begin_day);
                continue;
            }
        }

        else
        {
            break;
        }
    }

    printf("\n ����� �ϼ��� �Է��ϼ��� : ");scanf("%d",&cal_day);
}

int before_information()
{
    printf(" ó�� �Է��Ͻ� ��¥�� �����Դϴ�. \n");
    printf(" ���� : ");

    printf(" ���� ���� : ");
    printf(" ���� : ");
    printf(" �� ���� ������ ���� ���� : ");
}