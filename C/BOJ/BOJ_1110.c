#include <stdio.h>

main()
{
    int a,b,n,m,t,s,cnt = 0;
    scanf("%d",&n);

    s = n;

    while(1){
        a = n % 10;
        b = (n - a)/10;
        m = a+b;
        if(m>=10){
            m=m%10;
        }
        n = a*10 + m;
        cnt++;
        if(s == n){
            printf("%d",cnt);
            return 0;
        }
    }
}
