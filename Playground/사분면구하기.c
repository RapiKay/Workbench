#include <stdio.h>

main()
{
    int x,y,result;
    
    printf("\n 좌표값을 받고 어느 사분면에 위치해 있는지 알려주는 프로그램입니다.\n\n\n x값 입력 : ");
	scanf("%d", &x);
	printf("\n y값 입력 : ");
	scanf("%d", &y);

    if(x<-1000)
        x = -1000;
    if(x>1000)
        x = 1000;
    if(y<-1000)
        y = -1000;
    if(y>1000)
        y = 1000;

    if(x*y < 0){
        if(x>y)
            result = 4;
        if(x<y)
            result = 2;
    }
    if(x*y > 0){
        if(x>0)
            result = 1;
        if(x<0)
            result = 3;
    }
    printf("\n\n x값이 %d이고 y값이 %d인 점은 제 %d사분면에 위치해있습니다.",x,y,result);
}
