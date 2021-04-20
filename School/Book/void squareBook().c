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
    1 = ¦¢fof
    2 = ¦¡

    3 = ¦£    
    4 = ¦¤

    5 = ¦¦
    6 = ¦¥
    */
    int i,j;
    int page[200][200];

    printf("this");
    for(i=0; i<vertical; i++){
        for(j=0;j<horizontal; j++){
            page[i][j] = 0;
        }
        printf("\n");
    }

    for(i = 0; i< horizontal;i++){
        page[0][i] = 2;
        page[vertical-1][i] = 7;    
    }

    for(i = 0; i< vertical; i++){
        page[i][0] = 1;
        page[i][horizontal-1] = 1;
    }

    page[0][0] = 3;
    page[0][horizontal-1] = 4;
    page[vertical-1][0] = 5;
    page[vertical-1][horizontal-1] = 6;

    for(i=0; i<vertical; i++){
        for(j=0;j<horizontal; j++){
            printf("%d",page[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i< vertical; i++){
        for(j = 0; j< horizontal; j++){    
            
            switch (page[i][j])
            {
            case 0:
                printf("¦«");
                break;
            
            case 1:
                printf("¦¢");
                break;

            case 2:
                printf("¦¨");
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

            case 7:
                printf("¦ª");
                break;
            }
        }
        printf("\n");
    }
}   
