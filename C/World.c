#include <stdio.h>
#include <windows.h>

int world[20][30] = {0, };
int locationX,locationY,i,j;
int firstLocationX, firstLocationY;

int main()
{
    // X = width
    // Y = length
    printf("location X: ");scanf("%d",&locationY);
    printf("location Y: ");scanf("%d",&locationX);
    printf("\n");
    world[--locationX][--locationY] = 1;

    for(i=0;i<20;i++){
        for(j=0;j<=30;j++){
            world[i][j] == 0 ? printf("бр") : printf("бс");
        }
        printf("\n");
    }

    int carryquestion;
    printf("Keep? ");
    scanf("%d",&carryquestion);

    if(carryquestion == 0){
        return 0;
    }
    if(carryquestion == 1){
        system("cls");
        carry();
    }
}

int carry()
{
    firstLocationX = locationX; firstLocationY = locationY;
    printf("\nWhere you want?");
    printf("\nlocation X: ");
    scanf("%d",&locationY);
    printf("location Y: ");
    scanf("%d",&locationX);

    world[--locationX][--locationY] = 1;

    road();

    for(i=0;i<=20;i++){
        for(j=0;j<=20;j++){
            world[i][j] == 0 ? printf("бр") : printf("бс");
        }
        printf("\n");
    }

    return 0;
}

int road()
{
    if(firstLocationY < locationY)
    {
        for(i=locationY - firstLocationY;i<=locationY;i++){
            world[i][locationX] = 1;
        }
    }
    else{
        return 0;
    }
}
