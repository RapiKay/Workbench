#include <stdio.h>

main()
{
    int n,i;
    scanf("%d",&n);

    if(n>=100000)
        n = 100000;

    for(i=0;i<=n;i++){
        if(n == i)
            return 0;
        printf("%d\n",n-i);
    }
}