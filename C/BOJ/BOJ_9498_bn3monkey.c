#include <stdio.h>

// 분석 및 모방을 위해 수정함.
// 원본 
//main(a,b){scanf("%d",&a);b=65;if(a<90)b++;if(a<80)b++;if(a<70)b++;if(a<60)b+=2;putchar(b);}

main(){
    int a,b=65;
    scanf("%d", &a);
    if(a>100){
        printf("F");
        return 0;
    }
    if(a<90){
        if(a<80){
            if(a<70){
                if(a<60){
                    b = b + 2;
                }
                b++;
            }
            b++;
        }
        b++;
    }
    printf("%c",b);
}
