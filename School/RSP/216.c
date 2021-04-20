#include <stdio.h>

int n, k, cnt, stat;

void input()
{
    scanf("%d %d",&n, &k);
}

void process()
{
    cnt = n / k;
    if(cnt > 9999)
        stat = 1;
    else
        stat = 0;
}

void output()
{
    int i;
    if(stat == 0)
        for(i==1;i<=cnt;i++)
            printf("F-%04d\n",i);
    else
        printf("번호 초과 오류");
}

main()
[
    input();
    process();
    output(); 
]

// 