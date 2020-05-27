#include <stdio.h>

main()
{
    int A,B,C,D,E,F=0;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    scanf("%d", &E);

    if( A < 40){
        A = 40;
    }
    if( B < 40){
        B = 40;
    }
    if( C < 40){
        C = 40;
    }
    if( D < 40){
        D = 40;
    }
    if( E < 40){
        E = 40;
    }
    
    printf("%d", (A+B+C+D+E) / 5);
}