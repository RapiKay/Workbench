#include <stdio.h>
#include <math.h>

int main()
{
    long long a, b; 
    scanf("%lld %lld",&a,&b);

    long long sum;

    sum = llabs(a - b);
    printf("%lld\n", sum);

    return 0;
}