#include <stdio.h>

int main()
{

    // X = width
    // Y = length
    int world[20][20] = {0, };
    int locationX,locationY,i,j;
    printf("location Y: ");
    scanf("%d",&locationX);
    printf("location X: ");
    scanf("%d",&locationY);
    printf("\n");
    world[--locationX][--locationY] = 1;

    for(i=0;i<=20;i++){
        for(j=0;j<=20;j++){
            world[i][j] == 0 ? printf("#") : printf("@");
        }
        printf("\n");
    }

    int carryquestion;
    printf("\ncarry? 0 = false, 1 = true\n");
    scanf("%d",&carryquestion);

    if(carryquestion == 0){
        return 0;
    }
    if(carryquestion == 1){
        carry(locationX,locationY,world[20][20]);
    }
}

int carry(int locationX,int locationY,int world[20][20])
{
    int i,j;
    world[locationX][locationY] = 0;
    printf("\nWhere you want?");
    printf("\nlocation Y: ");
    scanf("%d",&locationX);
    printf("location X: ");
    scanf("%d",&locationY);

    world[--locationX][--locationY] = 1;

    for(i=0;i<=20;i++){
        for(j=0;j<=20;j++){
            world[i][j] == 0 ? printf("#") : printf("@");
        }
        printf("\n");
    }
    // int carryquestion;
    // printf("\ncarry? 0 = false, 1 = true\n");
    // scanf("%d",&carryquestion);
    
    // if(carryquestion == 0){
    //     return 0;
    // }
    // if(carryquestion == 1){
    //     carry(locationX,locationY,world[20][20]);
    // }

    return 0;
}