#include <stdio.h>

main()
{
    int Monthinput, Dayinput;
    printf("생일을 입력하는 프로그램\n");
    printf("월 입력\n");
    scanf("%d", &Monthinput);
    if( Monthinput > 12 ){
        printf("지구인이 아닙니다.");
        return 0;
    }
    if( Monthinput < 1){
        printf("지구인이 아닙니다.");
        return 0;
    }
    printf("\n일 입력\n");
    scanf("%d", &Dayinput);
    if( Dayinput > 31){
        printf(" 아니 그건 좀 ");
        return 0;
    }
    if( Dayinput < 1){
        printf(" 아니 그건 좀 ");
        return 0;
    }

    if( Monthinput == 8){
        if( Dayinput == 16){
            printf("\n 쌤 제 생일이에요");
            return 0;
        }
    }
    printf("\n\n\n\n\n\n\n\n\n당신의 생일은 %d월, %d일 입니다.", Monthinput, Dayinput);
}
