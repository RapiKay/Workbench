#include <stdio.h>

main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if(a<=0)
        a = 0;
    if(a>=24)
        a = 24;
    if(b<=0)
        b = 0;
    if(b>=59)
        b = 59;

    int c = b - 45;
    
    if(c<0){
        a--;
        c = 60 + c;
        if(a<0){
            a = 23;
        }
    }

    printf("%d %d",a,c);
}