#include <stdio.h>

main()
{
    int i,j,tmp = 1,len;
    char input[101];
    printf("����� ���ڿ� �Է� : ");
    gets(input);
    printf("�ﰢ���� ũ�� �Է� : ");
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
