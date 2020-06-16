#include <stdio.h>

main()
{
    int a,b,c,i,h[10]={0,},r;

    scanf("%d %d %d",&a,&b,&c);
    r = a*b*c;

    while(r!=0){
        h[r % 10]++;
        r /= 10;
    }

    for(i=0;i<10;i++){
        printf("%d\n",h[i]);
    }

    return 0;
}
