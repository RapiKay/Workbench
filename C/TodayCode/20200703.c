//�ִ�����, �ּҰ����
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,result_gcd, result_gcm;

    printf("ù ��° ���� �Է� : ");
    scanf("%d",&a);

    printf("�� ��° ���� �Է� : ");
    scanf("%d",&b);

    printf("\nscanf finished, calculating... Please wait a min.\n"); // result �� �������� �˸��� ����Ʈ��

    result_gcd = gcd(a,b);
    result_gcm = gcm(a,b);

    printf("result calculating finished\n"); // result �� ���� �˸��� ����Ʈ��

    printf("printf test started\n");
    printf("�ִ����� gcd : %d\n", result_gcd);
    printf("�ּҰ���� gcm : %d\n", result_gcm);
    printf("printf test finished\n");
    return 0;
}

int gcd(int a,int b)
{
    if(b==0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}

int gcm(int m, int n)
{
    return m * n / gcd(m,n);
}
