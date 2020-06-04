#include <stdio.h>

main()
{
    int n,i;
    scanf("%d",&n);
    if (n >= 100000)
        n = 100000;
    
    for(i=1;i<=n;i++){
        printf("%d\n",i);
    }
}
