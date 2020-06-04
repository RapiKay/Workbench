#include <stdio.h>

main()
{
    int n,a,b,i;
    scanf("%d", &n);
		
    for(i=0;i<n;i++){
        scanf("%d %d",&a, &b);

		if( a < 0 )
			a = 1;

		if( b > 10 )
			b = 9;
			
		printf("%d\n",a+b);
    }
}
