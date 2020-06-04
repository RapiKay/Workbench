#include <stdio.h>

main()
{
    int n,i;
    scanf("%d", &n);
    if(n<=1)
        n = 1;
    if(n>=9)
        n = 9;

    for(i=1;i<10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
