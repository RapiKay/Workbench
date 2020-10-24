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
        printf("여러가지 계산을 할 수 있는 계산기\n\n");
        printf(" 1. 계산기를 사용한다.\n\n 2. 계산기를 사용하지 않는다.\n\n 3. 이 프로그램의 정보를 읽는다.\n\n");
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
        printf("프로그램을 종료합니다.");
        return 0;
    }
    if(input == 3){
        developer();
        return;
    }
    else{
        printf("\n1,2 또는 3을 입력해주세요\n");
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
    printf("개발자 연락처 : 0816aszx@gmail.com\n");
    printf("Discord : Rapi_'Kay#3168\n");
    printf("돌아가기 : 아무 키나 입력\n");
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
    printf("할 계산의 종류를 선택하세요\n\n");
    printf("1. 간단한 연산\n");
    printf("2. 공배수,공약수\n");
    printf("3. 넓이 구하기");
    printf("4. 부피 구하기");

    scanf("%d",&sel_cal_input);

    if(sel_cal_input != 1 || sel_cal_input != 2 || sel_cal_input != 3 || sel_cal_input != 4){
        printf("선택지의 숫자를 입력하세요.");
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
    printf("할 계산의 종류를 선택하세요\n\n");
    printf("1. 제곱근\n");
    printf("2. 제곱수\n");
    printf("3. 부피 구하기\n");
    printf("dev..");
    end();
}

void end()
{
    return 0;
}
