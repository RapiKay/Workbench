#include <stdio.h>

main()
{
    int a,i,j,tmp=1;
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        for(j=1;j<=tmp;j++){
            printf("*");
        }
        tmp++;
        printf("\n");
    }

    tmp--;
    
    for(i=a;i>=1;i--){
        for(j=a;j>=tmp;j--){
            printf("*");
        }
        tmp--;
        printf("\n");
    }
}