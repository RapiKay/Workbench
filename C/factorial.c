#include <stdio.h>

int f(int n)
{
    if(n == 1)
        return 1;    

    return n * f(n - 1);
}

main()
{
    printf("%d", f(5));
}