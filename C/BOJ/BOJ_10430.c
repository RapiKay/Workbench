#include <stdio.h>

main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);
    if(a<2)
        a = 2;
    if(c>10000)
        c = 2;

    printf("%d\n%d\n%d\n%d",(a+b)%c,((a%c)+(b%c))%c,(a*b)%c,((a%c)*(b%c))%c);
}