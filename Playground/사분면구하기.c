#include <stdio.h>

main()
{
    int x,y,result;
    
    printf("\n ��ǥ���� �ް� ��� ��и鿡 ��ġ�� �ִ��� �˷��ִ� ���α׷��Դϴ�.\n\n\n x�� �Է� : ");
	scanf("%d", &x);
	printf("\n y�� �Է� : ");
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
    printf("\n\n x���� %d�̰� y���� %d�� ���� �� %d��и鿡 ��ġ���ֽ��ϴ�.",x,y,result);
}
