#include <stdio.h>

main()
{
    int n,a,b,i;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        if(a<=0)
            a = 0;
        if(b>=10)
            b = 10;
        
        printf("Case #%d: %d\n",i,a+b);
    }
}