#include <stdio.h>

main()
{
    int i,j,tmp = 1,len;
    char input[101];
    printf("출력할 문자열 입력 : ");
    gets(input);
    printf("삼각형의 크기 입력 : ");
    scanf("%d", &len);

    while(1)
    {
        for(i=1;i<=tmp;i++){
            for(j=1;j<=i;j++){
                printf("%s", input);
            }
            printf("\n");
        }

        for(i=tmp-1;i>=1;i--){
            for(j=i;j>=1;j--){
                printf("%s", input);
            }
            printf("\n");
        }

        tmp++;
    }
    // while(1)
    // {
    //     for(i=1;i<=len;i++){
    //         for(j=1;j<=i;j++){
    //             printf("%s", input);
    //         }
    //         printf("\n");
    //     }

    //     for(i=len-1;i>=1;i--){
    //         for(j=i;j>=1;j--){
    //             printf("%s", input);
    //         }
    //         printf("\n");
    //     }
//    }
}
