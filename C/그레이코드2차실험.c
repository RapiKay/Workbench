#include <stdio.h>

void main()
{
    int temp, length;
    int gray, i = 1, j, k = 0, y;
    printf(" 그레이코드를 2진수와 10진수로 바꿔주는 프로그램입니다.\n 그레이코드를 입력해주세요 : ");
    scanf("%d", &gray);

    while(i<gray){
        i = i * 10;
        j++;
    }
    if(i >= gray)
        j--;
    printf("%d", j);

    char storage[j] = gray;
    
    for(y = j; y <= 0; y--){
        printf("%d", storage[y]);
    }
}