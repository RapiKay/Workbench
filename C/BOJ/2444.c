#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    int i,j;

    for(i=0;i<a;i++){
        for(j=0;j<a-i-1;j++){
            printf(" ");
        }
        for(j=0;j<2*i+1;j++){
            printf("*");
        }   
        printf("\n");
    }

    for(i=a-1;i>0;i--){
        for(j=0;j<a-i;j++){
            printf(" ");
        }
        for(j=0;j<2*i-1;j++){
            printf("*");
        }   
        printf("\n");
    }
    return 0;
}