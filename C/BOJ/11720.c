#include <stdio.h>

int main()
{
    int input = 0, sum = 0;
    char a[100] = {0, };
    int i = 0;
    scanf("%d",&input);
    scanf("%s", a);
    for(i=0;i<input;i++){
        sum += a[i]-'0';
    }
    printf("%d",sum);
}