#include <string.h>
#include <stdio.h>

int main (void)
{
    char stra[100],strb[100];

    printf("문자열을 이어드립니다.\n");
    printf("첫 번째 문자열을 입력해주세요.\n");
    scanf("%s",stra);

    printf("두 번째 문자열을 입력해주세요.\n");
    scanf("%s",strb);

    printf("%s + %s = %s", stra, strb, strcat(stra,strb));

    return 0;
}
