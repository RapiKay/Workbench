#include <string.h>
#include <stdio.h>

int main (void)
{
    char stra[100],strb[100];

    printf("���ڿ��� �̾�帳�ϴ�.\n");
    printf("ù ��° ���ڿ��� �Է����ּ���.\n");
    scanf("%s",stra);

    printf("�� ��° ���ڿ��� �Է����ּ���.\n");
    scanf("%s",strb);

    printf("%s + %s = %s", stra, strb, strcat(stra,strb));

    return 0;
}
