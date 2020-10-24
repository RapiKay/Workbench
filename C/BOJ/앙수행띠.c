#include <stdio.h>
main(){
    int a,b;
    printf("입력:");
    scanf("%d %d",&a,&b);
    printf("")
    if(b==1,b==3,b==5,b==7,b==8,b==10,b==12)
        printf("31일");
        else if(b==4,b==6,b==9,b==11)
        printf("30일");
        else{
            if(a%4==0&&a%100!=0||a%400==0)
            printf("29일");
            else
            printf("28일");

        }
        printf("입니다");

}
