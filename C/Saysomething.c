#include <stdio.h>

void main()
{
    int menuinput;
//  int inputDecimal, temp, length=0, i;

    printf("\n ������ �ǰ� ���� ���α׷��Դϴ�.\n ��ȣ�� �Է����ּ���.");
    printf("\n=======================");
    printf("\n 1. 10������ 2������ ��ȯ");
    printf("\n 2. 2������ 10������ ��ȯ");
    printf("\n=======================\n");
    printf(" �Է� : ");
    scanf("%d", &menuinput);

    if(menuinput == 1){
        
        int inputDecimal, temp, length=0, i;
        printf("=======================\n");
	    printf("\n 10������ 2������ ��ȯ\n\n 10���� �Է� : ");
	    scanf("%d",&inputDecimal);
        while(inputDecimal==0){    
            printf("\n �Է��Ͻ� 10������ 2������ ��ȯ�� ����Դϴ�.\n 0");
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

        printf("\n �Է��Ͻ� 10������ 2������ ��ȯ�� ����Դϴ�.\n");

        for(i = 0; i <= length-1; i++){
            printf("%d", outputBinary[i]);
        }
    }

    else if(menuinput == 2){
        int inputBinary, outputDecimal = 0, weight = 1;
        printf("=======================\n");
        printf("\n 2������ 10������ ��ȯ \n\n");
        printf(" 2���� �Է� : ");
        scanf(" %d", &inputBinary);

        while(inputBinary > 0){
        if(inputBinary % 10 != 0){
            outputDecimal = outputDecimal + weight;
        }
        inputBinary = inputBinary / 10;
        weight = weight * 2;
    }
    printf("\n �Է��Ͻ� 2������ \n 10������ %d�Դϴ�.", outputDecimal);
    }

    else{
        printf(" 1 �Ǵ� 2�� �Է����ּ���");
        return 0;
    }   
}
