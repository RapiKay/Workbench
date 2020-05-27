#include <stdio.h>

int main()
{
    int a[4];
    
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    int sml = a[0];

    for(int j=0;j<=2;j++){
        if(sml>a[j])
        sml = a[j];
    }

    if(sml>2000)
    sml = 2000;
    if(sml<100)
    sml = 100;

    int sml2 = a[3];

    if(a[3]>a[4])
    sml2 = a[4];

    if(sml2>2000)
    sml2 = 2000;
    if(sml2<100)
    sml2 = 100;

    printf("%d", sml+sml2-50);
}