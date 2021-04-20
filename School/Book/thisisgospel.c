#include <stdio.h>
#include <windows.h>

#define _CRT_SECURE_NO_WARNINGS

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int booktype;
int vertical;
int horizontal;

void input()
{
    printf("\n\n 깍두기 공책 : 1\n 음악 공책 : 2\n\n 출력할 공책의 종류를 입력해주세요 > ");
    while(1)
    {
        scanf("%d", &booktype);
        if(booktype == 1 || booktype == 2){
            break;
        }
        else{
            system("cls");
            printf("\n\n 깍두기 공책 : 1\n 음악 공책 : 2\n"ANSI_COLOR_RED"위에 있는 항목 중 하나를 입력해주세요!"ANSI_COLOR_RESET"\n 출력할 공책의 종류를 입력해주세요 > ");
        }
    }
}

void typedHV()
{
    printf(" 입력하신 가로의 길이 : %d\n 입력하신 세로의 길이 : %d",horizontal,vertical);
}

int main()
{
    printf(ANSI_COLOR_BLUE"A"ANSI_COLOR_RESET);
    system("cls");
    input();
    
    if(booktype == 1){
        squareBook();
        return 0;
    }
    else if(booktype == 2){
        musicBook();
        return 0;
    }

    system("cls");
}

void squareBook()
{
    /*
    0 = ┼
    1 = │
    2 = ─

    3 = ┌    
    4 = ┐

    5 = └
    6 = ┘
    */
    int i,j;
    system("cls");
    typedHV();
    printf(" \n\n 원하는 깍두기 공책의 가로 길이를 입력해주세요 > ");scanf("%d", &horizontal);
    system("cls");
    typedHV();
    printf(" \n\n 원하는 깍두기 공책의 세로 길이를 입력해주세요 > ");scanf("%d", &vertical);

    int page[vertical][horizontal];

    for(i=0; i<=vertical; i++){
        for(j=0;i<=horizontal; j++){
            page[i][j] = 0;
            printf("%d",page[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i<= horizontal;i++){
        page[0][i] = 1;
        page[vertical][i] = 1;
    }

    for(i = 0; i<= vertical; i++){
        page[i][0] = 2;
        page[i][horizontal] = 7;
    }

    page[0][0] = 3;
    page[0][horizontal] = 4;
    page[vertical][0] = 5;
    page[vertical][horizontal] = 6;

    for(i = 0; i<= vertical; i++){
        for(j = 0; i<= horizontal; j++){
            switch (page[i][j])
            {
            case 0:
                printf("┼");
                break;
            
            case 1:
                printf("│");
                break;

            case 2:
                printf("┬");
                break;

            case 3:
                printf("┌");
                break;

            case 4:
                printf("┐");
                break;

            case 5:
                printf("└");
                break;
            
            case 6:
                printf("┘");
                break;
            
            case 7:
                printf("┴");
                break;
            }
        }
        printf("\n");
    }
}   

void musicBook()
{
    system("cls");
    typedHV();
    printf(" \n\n 원하는 음악 공책의 가로 길이를 입력해주세요 > ");scanf("%d", &horizontal);
    system("cls");
    typedHV();
    printf(" \n\n 원하는 음악 공책의 세로 길이를 입력해주세요 > ");scanf("%d", &vertical);

    int page[2][200][200];
    int i,j;

    for(i=0;i<vertical;i++){
        for(j=0;j<horizontal;j++){
            page[0][i][j] = 0;
            page[1][i][j] = 0;
            page[2][i][j] = 0;
        }
    }

    // 0 = -
    // 1 = ┌
    // 2 = ┐
    // 3 = └
    // 4 = ┘
    // 5 = │

    page[0][0][0] = 1;
    page[1][horizontal-1][0 ] = 2;

}
