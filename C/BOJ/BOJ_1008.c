#include <stdio.h>

main()
{
	int a,b;

	scanf("%d %d", &a, &b);
	if(a < 0){
        a = 0;
    }
    if(b > 10){
        b = 10;
    }
    printf("%.9lf",(double)a/b);
}