#include <stdio.h>

main()
{
    int input;
	
	scanf("%d", &input);
	
    if(input > 100){
        printf("F");
        return 0;
    }

    if(input >= 60){
        if(input >= 70){
            if(input >= 80){
                if(input >= 90){
                    printf("A");
                    return 0;
                    }
                printf("B");
                return 0;
                }
            printf("C");
            return 0;
            }
        printf("D");
        return 0;
        }
        else{
            printf("F");
        }
    }

