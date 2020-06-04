#include <stdio.h>

main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    if(a < 1){
        a = 1;
    }
    if(b > 10000){
        b = 10000;
    }
    printf("%d\n%d\n%d\n%d\n%d\n",a+b,a-b,a*b,a/b,a%b);
}