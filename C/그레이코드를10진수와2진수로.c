#include <stdio.h>
/*#include <math.h>

int ppow(int a, int b)
{
    int c, d = a;
    for(c=1;c<b;c++){
        d=d*a;
    }
    return d;  
}
*/
void main()
{
    int temp, length = 0;
    int gray, i = 1, j, k = 0, y;
    printf(" �׷����ڵ带 2������ 10������ �ٲ��ִ� ���α׷��Դϴ�.\n �׷����ڵ带 �Է����ּ��� : ");
    scanf("%d", &gray);

    int storage = gray;

    while(0 < storage){
        length++;
        storage = storage / 10;
    }
    printf("%d\n", length);

    int grayfortwo[length];

    for(k = 0; k <= length; k++){
        if(gray % 10 != 0){
            grayfortwo[k] = 1;
            gray = gray / 10;
        }
        else{
            grayfortwo[k] = 0;
            gray = gray / 10;   
        } 
    }
    
    int kl = k;

    while(kl != 0){
        printf("%d", grayfortwo[kl]);
        kl--;
    }
}
/*    int inputBinary, outputDecimal = 0, weight = 1;
    printf("\n 2������ 10������ ��ȯ \n\n");
    printf("2���� �Է� : ");
    scanf("\n %d", &inputBinary);

    while(inputBinary > 0){
        if(inputBinary % 10 != 0){
            outputDecimal = outputDecimal + weight;
        }
        inputBinary = inputBinary / 10;
        weight = weight * 2;
    }
    printf("\n �Է��Ͻ� 2������ \n 10������ %d�Դϴ�.", outputDecimal);
}
}*/
