//���� ����
// -b^2+-sqrt(b^2 - 4ac) / 2a 
#include <stdio.h>
#include <math.h>
/*
int main()
{
    double a,b,c;
	printf("a �Է� : ");
    scanf("%f",&a);
    printf("b �Է� : ");
    scanf("%f",&b);
    printf("c �Է� : ");
    scanf("%f",&c);
    double tmp = pow(b,2);
    printf("%f",tmp);
    return 0;

    double result_a = result_non_route(a,b,c,tmp);
    double result_b = result_non_route_2(a,b,c,tmp);

    printf("\n\n ���� ��� : %f �Ǵ� %f",result_a,result_b);
    
    return a,b,c,tmp;
    // double result_non_route_a = -pow(b,2) + sqrt(pow(b,2)-4*a*c);
    // double result_non_route_b = -pow(b,2) - sqrt(pow(b,2)-4*a*c);
}

result_non_route(int a,int b,int c,double tmp)
{
    double result1 = tmp + sqrt(tmp-4*a*c);
    return result1;
}

result_non_route_2(int a,int b,int c,double tmp)
{
    double result2 = tmp - sqrt(tmp-4*a*c);
    return result2;
}

int result_route(int a,int b,int c)
{
    double result_cal;

    result_cal = sqrt(pow(b,2)-4*a*c);
    return result_cal;
}  */

int main()
{
    int a,b,c;
    printf("a �Է�  :");
    scanf("%d",&a);
    printf("b �Է� : ");
    scanf("%d",&b);
    printf("c �Է� : ");
    scanf("%d",&c);

    double back_result = sqrt(pow(b,2)-4*a*c);
    printf("��� : %f �Ǵ� %f\a",(pow(b,2)-back_result)/2*a,(pow(b,2)+back_result)/2*a);
    }
