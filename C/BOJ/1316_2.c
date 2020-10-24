#include <stdio.h>
#include <stdbool.h>

main()
{
    char input[100] = {NULL};
    int list[100] = {0, };
    int i, rst = 0;
    int check[100] = {0, };
    scanf("%s", input);

    for(i=0;input[i+1]!=NULL;i++){
        if(input[i]!=input[i+1]){
            list[(int)input[i]-97]++;
            check[(int)input[i]-97]++;
        }
    }

    for(i=0;i<=26;i++){
        if(input[i]!=0 && check[i] != 0){
            rst++;
        }
    }

    printf("%d",rst);
}
