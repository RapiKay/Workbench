#include <stdio.h>

int main()
{
    int money = 1000;
    int pay;
    int coin = 0;

    scanf("%d", &pay);

    money -= pay;

//    printf("%d\n",money);

    while(money != 0){
        if(money >= 500){
            coin++;
            money -= 500;
            continue;
        }
        if(money >= 100){
            coin++;
            money -= 100;
            continue;
        }
        if(money >= 50){
            coin++;
            money -= 50;
            continue;
        }
        if(money >= 10){
            coin++;
            money -= 10;
            continue;
        }
        if(money >= 5){
            coin++;
            money -= 5;
            continue;
        }
        if(money >= 1){
            coin++;
            money -= 1;
            continue;
        }
//        printf("%d %d\n",money, coin);
    }
    
    printf("%d",coin);

}