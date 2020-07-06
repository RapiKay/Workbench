#include <stdio.h>
#include <stdbool.h>

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

void list(int input)        //2 입력시 여기서 끝냄
{
    if(input == 1){
        printf("\nA");
        return 0;
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
    printf("돌아가기 : 1\n");
    printf("=======================================\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    scanf("%d",&back_or_etc_input);
    if(back_or_etc_input == 1){
        saw_develop++;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        main();
    }
}

void sel_cal()
{
    printf("=======================================\n\n");
    printf("할 계산의 종류를 선택하세요\n\n");
    
}
