#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>

void start()
{
    int input, stack = 0;
    printf(" ������ �����մϴ�.\n �� ������ ���� ��ȭ�ϸ� ������ Ž���ϴ� �����Դϴ�.\n ���̵��� �𸣰ڽ��ϴ�.");
    printf("\n ������ �����Ͻ÷��� 1�� �Է����ּ���.");scanf("%d",&input);

    while(1)
    {
        switch (input)
        {
        case 1:
            system("map.exe");
            system("cls");
            printf(" ������ �������Դϴ�...");
            break;

        default:
            stack++;
            if(stack == 2){
                system("cls");
                printf(" ������ �����մϴ�.");
                return 0;
            }
            printf("\n �ٽ� �Է����ּ��� : ");scanf("%d",&input);
            break;
        }
    }
}

void setup()
{

}

main()
{
    start();
}

void UI()
{
    printf(" ����� �� ��ġ : ");
}

void Dungeon()
{
    printf("\n\n\n ���� �Ա� �Դϴ�. �� ������ �������ּ��� ");
    printf("\n 1. ");
}