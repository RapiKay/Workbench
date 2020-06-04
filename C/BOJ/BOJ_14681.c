#include <stdio.h>

main()
{
    int x,y;
    scanf("%d\n%d", &x,&y);

    if(x<-1000)
        x = -1000;
    if(x>1000)
        x = 1000;
    if(y<-1000)
        y = -1000;
    if(y>1000)
        y = 1000;

    if(x*y < 0){
        if(x>y)
            printf("4");
        if(x<y)
            printf("2");
    }
    if(x*y > 0){
        if(x>0)
            printf("1");
        if(x<0)
            printf("3");
    }
}