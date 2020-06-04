#include <stdio.h>
#include <time.h>

void main()
{
    int howmany, *database, temp, i, j;
    printf("버블정렬 : 차순");
    printf("데이터 개수 입력: ");
    scanf("%d", &howmany);
    database = malloc(howmany*sizeof(int));

    srand(time(NULL));
    for(i=0;i<howmany;i++){
        database[i] = (rand() % 10) + 1;
        printf("%d | ", database[i]);
    }

    for(i=0;i<howmany-1;i++){
        for(j=howmany-1;j>i;j--){
            if(database[j-1]<database[j]){
            temp = database[j-1];
            database[j-1] = database[j];
            database[j] = temp;
            }
        }
    }
    printf("\n\n");
    for(i=0;i<howmany;i++){
        printf("%d | ", database[i]);
    }
    free(database);
}
