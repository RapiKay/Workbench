//최대공약수, 최소공배수
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,result_gcd, result_gcm;

    printf("첫 번째 숫자 입력 : ");
    scanf("%d",&a);

    printf("두 번째 숫자 입력 : ");
    scanf("%d",&b);

    printf("\nscanf finished, calculating... Please wait\n"); // result 의 시작점을 알리는 프린트문

    result_gcd = gcd(a,b);
    result_gcm = gcm(a,b);

    printf("result calculating finished\n"); // result 의 끝을 알리는 프린트문

    printf("printf test started\n");
    printf("최대공약수 gcd : %d\n", result_gcd);
    printf("최소공배수 gcm : %d\n", result_gcm);
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
