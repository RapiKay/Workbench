#include <stdio.h>
#include <windows.h>

int vertical, horizontal;

main()
{

    scanf("%d %d",&vertical,&horizontal);
    squareBook();
}
void squareBook()
{
    /*
    0 = ¦«
    1 = ¦¢
    2 = ¦¡

    3 = ¦£    
    4 = ¦¤

    5 = ¦¦
    6 = ¦¥
    */
    int i,j;
    char page[100][100];

    printf("that");
    
    for(i=0; i<vertical; i++){
        for(j=0;j<horizontal; j++){
            page[i][j] = '¦«';
        }
        printf("\n");
    }

    for(i = 0; i< horizontal;i++){
        page[0][i] = '¦¡';
        page[vertical-1][i] = '¦¡';
    }

    for(i = 0; i< vertical; i++){
        page[i][0] = '¦¢';
        page[i][horizontal-1] = '¦¢';
    }

    page[0][0] = '¦£';
    page[0][horizontal-1] = '¦¤';
    page[vertical-1][0] = '¦¦';
    page[vertical-1][horizontal-1] = '¦¥';

    for(i=0; i < vertical; i++){
        for(j=0;j < horizontal; j++){
            printf("%c",page[i][j]);
        }
        printf("\n");
    }
/*
    for(i = 0; i< vertical; i++){
        for(j = 0; i< horizontal; j++){    
            switch (page[i][j])
            {
            case 0:
                printf("¦«");
                break;
            
            case 1:
                printf("¦¢");
                break;

            case 2:
                printf("¦¡");
                break;

            case 3:
                printf("¦£");
                break;

            case 4:
                printf("¦¤");
                break;

            case 5:
                printf("¦¦");
                break;
            
            case 6:
                printf("¦¥");
                break;
            
            default:
                break;
            }
        }
        printf("\n");
    }
    */
}   
