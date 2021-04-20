#include <stdio.h>

int main()
{
    int x,y,w,h;

    scanf("%d %d %d %d",&x,&y,&w,&h);

    int m = x;

    if(m > y)m=y;
    if(m > w-x)m=w-x;
    if(m > h-y)m=h-y;

    printf("%d",m);
}