#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int saw_develop;

void main()
{
    int input;
    bool expecation;
    if(expecation == false){
        printf("=======================================\n\n");
        printf("�������� ����� �� �� �ִ� ����\n\n");
        printf(" 1. ���⸦ ����Ѵ�.\n\n 2. ���⸦ ������� �ʴ´�.\n\n 3. �� ���α׷��� ������ �д´�.\n\n");
        printf("=======================================\n"); 
        }
    if(saw_develop > 0){
    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	}
    expecation = true;
    scanf("%d",&input);

    list(input);
    return 0;
}

void list(int input)    
{
    if(input == 1){
        printf("\nA");
    }
    if(input == 2){
        printf("���α׷��� �����մϴ�.");
        return 0;
    }
    if(input == 3){
        developer();
        return;
    }
    else{
        printf("\n1,2 �Ǵ� 3�� �Է����ּ���\n");
        main(1,true);
    }
    return;
}

void developer()
{
    int back_or_etc_input;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n=======================================\n");
    printf("Made by Rapi_Kay\n");
    printf("Start:2020.07.01\n");
    printf("End: ???\n");
    printf("������ ����ó : 0816aszx@gmail.com\n");
    printf("Discord : Rapi_'Kay#3168\n");
    printf("���ư��� : �ƹ� Ű�� �Է�\n");
    printf("=======================================\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    scanf("%d",&back_or_etc_input);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
	main();
}

void sel_cal()
{
    int sel_cal_input;

    printf("=======================================\n\n");
    printf("�� ����� ������ �����ϼ���\n\n");
    printf("1. ������ ����\n");
    printf("2. �����,�����\n");
    printf("3. ���� ���ϱ�");
    printf("4. ���� ���ϱ�");

    scanf("%d",&sel_cal_input);

    if(sel_cal_input != 1 || sel_cal_input != 2 || sel_cal_input != 3 || sel_cal_input != 4){
        printf("�������� ���ڸ� �Է��ϼ���.");
        sel_cal();
    }

    if(sel_cal_input == 1){
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        simple_cal();
    }

    if(sel_cal_input == 2){}

    if(sel_cal_input == 3){}

    if(sel_cal_input == 4){}
}

void simple_cal()
{
    printf("=======================================\n\n");
    printf("�� ����� ������ �����ϼ���\n\n");
    printf("1. ������\n");
    printf("2. ������\n");
    printf("3. ���� ���ϱ�\n");
    printf("dev..");
    end();
}

void end()
{
    return 0;
}
