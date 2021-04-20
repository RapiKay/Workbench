#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>

void start()
{
    int input, stack = 0;
    printf(" 게임을 시작합니다.\n 이 게임은 검을 강화하며 던전을 탐험하는 게임입니다.\n 난이도는 모르겠습니다.");
    printf("\n 게임을 시작하시려면 1을 입력해주세요.");scanf("%d",&input);

    while(1)
    {
        switch (input)
        {
        case 1:
            system("map.exe");
            system("cls");
            printf(" 게임을 실행중입니다...");
            break;

        default:
            stack++;
            if(stack == 2){
                system("cls");
                printf(" 게임을 종료합니다.");
                return 0;
            }
            printf("\n 다시 입력해주세요 : ");scanf("%d",&input);
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
    printf(" 당신의 검 수치 : ");
}

void Dungeon()
{
    printf("\n\n\n 던전 입구 입니다. 들어갈 던전을 선택해주세요 ");
    printf("\n 1. ");
}