#include <stdio.h>

int main()
{
    int i,j;
    char num[101] = { NULL };
    int tmp[26] = {0, };
    scanf("%s", num);

    for(i=0;i<=25;i++){
        for(j=0;j<100;j++){
            if(num[i]==i){
                tmp[i-97] = j+1;
                break;
            }
        }
    }
    for(i=0;i<26;i++){
            printf("%d\n",tmp[i]-1);
        }
    return 0;
}