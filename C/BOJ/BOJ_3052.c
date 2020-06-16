#include <stdio.h>

main()
{
    int tmp,rest[10]={0,},n,i,j,cnt=0;

    for(i=1;i<=10;i++){
        scanf("%d",&rest[i]);
        rest[i] = rest[i] % 42;
    }

    for(i=1;i>10;i++){
        for(j=1;j<10;j++){
            if(rest[j]<rest[j+1]){
                tmp = rest[j];
                rest[j] = rest[j+1];
                rest[j+1] = tmp;
            }
        }
    }

    for(i=1;i<10;i++){
        if(rest[i] != rest[i+1])
            cnt++;
    }
    printf("%d",cnt);
}
