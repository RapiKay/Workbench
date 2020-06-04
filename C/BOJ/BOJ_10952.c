#include <stdio.h>

main()
{
    int a=1,b;
    while(a!=0){
        scanf("%d %d",&a,&b);
        if(a < 0)
            a = 0;
        if(b > 10)
            b = 10;
        printf("%d\n",a+b);
        if( a==0&&b==0){
            return 0;
    	}
    }
}
