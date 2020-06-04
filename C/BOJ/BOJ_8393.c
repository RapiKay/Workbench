#include <stdio.h>

main()
{
    int n,i,j=0;
    
    scanf("%d",&n);

    if(n <= 1)
        n = 1;
    if(n >= 10000)
        n = 10000;

    for(i=1;i<=n;i++){
        j = j + i;
    }
    
    printf("%d",j);
}
