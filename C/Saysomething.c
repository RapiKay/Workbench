#include <stdio.h>

void main()
{
    int menuinput;
//  int inputDecimal, temp, length=0, i;

    printf("\n 만능이 되고 싶은 프로그램입니다.\n 번호를 입력해주세요.");
    printf("\n=======================");
    printf("\n 1. 10진수를 2진수로 변환");
    printf("\n 2. 2진수를 10진수로 변환");
    printf("\n=======================\n");
    printf(" 입력 : ");
    scanf("%d", &menuinput);

    if(menuinput == 1){
        
        int inputDecimal, temp, length=0, i;
        printf("=======================\n");
	    printf("\n 10진수를 2진수로 변환\n\n 10진수 입력 : ");
	    scanf("%d",&inputDecimal);
        while(inputDecimal==0){    
            printf("\n 입력하신 10진수를 2진수로 변환한 결과입니다.\n 0");
            return 0;
        }

	    temp = inputDecimal;
	    while(temp>0){
		    temp = temp / 2;
		    length++;
	    }	
	
	    int outputBinary[length];
	    for(i=length-1; inputDecimal>0; i--){
		    outputBinary[i] = inputDecimal % 2;
		    inputDecimal = inputDecimal/2;
	    }

        printf("\n 입력하신 10진수를 2진수로 변환한 결과입니다.\n");

        for(i = 0; i <= length-1; i++){
            printf("%d", outputBinary[i]);
        }
    }

    else if(menuinput == 2){
        int inputBinary, outputDecimal = 0, weight = 1;
        printf("=======================\n");
        printf("\n 2진수를 10진수로 변환 \n\n");
        printf(" 2진수 입력 : ");
        scanf(" %d", &inputBinary);

        while(inputBinary > 0){
        if(inputBinary % 10 != 0){
            outputDecimal = outputDecimal + weight;
        }
        inputBinary = inputBinary / 10;
        weight = weight * 2;
    }
    printf("\n 입력하신 2진수는 \n 10진수로 %d입니다.", outputDecimal);
    }

    else{
        printf(" 1 또는 2를 입력해주세요");
        return 0;
    }   
}
