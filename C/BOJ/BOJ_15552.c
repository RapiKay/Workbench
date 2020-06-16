#include <stdio.h>

main()
{
    int i,a,x,y;
    scanf("%d",&a);
    
    if(a >= 1000000)
        a = 1000000;

    for(i=0;i<a;i++){
        scanf("%d %d",&x,&y);
        
        printf("%d\n",x+y);
    }
}
