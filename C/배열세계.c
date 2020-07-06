#include <stdio.h>

void main()
{
    int world[30][30] = {{0, }, {0, }};
    int i,j;
    world[6][6] = 1;

    for(i=1;i<=30;i++){
        for(j=1;j<=30;j++){
            if(world[i][j] == 0){
                printf("#");
            }
            else{
                printf("@");
            }	
        }
        printf("\n");
    }
}
