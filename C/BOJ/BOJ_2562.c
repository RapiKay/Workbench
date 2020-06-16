#include <stdio.h>

main()
{
    int i,a[8] = {0,},b = a[1],c;
    
	for(i=1;i<=9;i++){
        scanf("%d",&a[i]);
        if(b<a[i]){
            b=a[i];
            c=i;
        }
    }
    printf("%d",b);
    printf("\n%d",c);
}
