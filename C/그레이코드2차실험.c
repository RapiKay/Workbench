#include <stdio.h>

void main()
{
    int temp, length;
    int gray, i = 1, j, k = 0, y;
    printf(" �׷����ڵ带 2������ 10������ �ٲ��ִ� ���α׷��Դϴ�.\n �׷����ڵ带 �Է����ּ��� : ");
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