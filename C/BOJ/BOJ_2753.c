#include <stdio.h>

main()
{
    int a;

    scanf("%d", &a);

    if(a % 400 == 0){
        printf("1");
        return 0;
    }
    if(a % 4 == 0){
        if(a % 100 != 0){
            printf("1");
        }
        if(a % 100 == 0){
            printf("0");
        }
    }
    else{
        printf("0");
    }
}
