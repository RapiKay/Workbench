#include<stdio.h>

int main()
{
    int a[10],b[42]={0, },i,num=0,cnt=0;

    for (i=0;i<10;i++){
        scanf(" %d", &a[i]);
        num = a[i] % 42;
        b[num]++;
    }

    for (i=0;i<42;i++){
        if (b[i]>0)
            cnt++;
    }
    printf("%d", cnt);
    	
}
