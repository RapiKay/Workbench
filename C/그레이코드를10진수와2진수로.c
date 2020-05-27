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
    printf(" 그레이코드를 2진수와 10진수로 바꿔주는 프로그램입니다.\n 그레이코드를 입력해주세요 : ");
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
    printf("\n 2진수를 10진수로 변환 \n\n");
    printf("2진수 입력 : ");
    scanf("\n %d", &inputBinary);

    while(inputBinary > 0){
        if(inputBinary % 10 != 0){
            outputDecimal = outputDecimal + weight;
        }
        inputBinary = inputBinary / 10;
        weight = weight * 2;
    }
    printf("\n 입력하신 2진수는 \n 10진수로 %d입니다.", outputDecimal);
}
}*/
