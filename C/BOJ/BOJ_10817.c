#include <stdio.h>

int main()
{
    int a,b,c,n,m,i;
    scanf("%d %d %d", &a, &b, &c);

    int d[2];

    d[0] = a;
    d[1] = b;
    d[2] = c;
    
    int max = d[0];

    for (i = 0; i<= 2; i++) {
        if (d[i] > max) {
            max = d[i];
            break;
        }
    }

    n = i;

    int min = d[0];

    for(i = 0; i<= 2; i++){
        if (d[i] < min) {
            min = d[i];
            break;
        }
    }

    m = i;

    printf("%d | max | %d\n", d[n],n);
    printf("%d | min | %d", d[m],m);



    return 0;
}