#include <stdio.h>
#include <time.h>

void main()
{
    int howmany, *database, i, data, result = -1, input, change, trans, once;
    printf("LinearSearch 선형검색을 위한 데이터 개수 입력: ");
    scanf("%d", &howmany);
    database = calloc(howmany, sizeof(int));

    srand(time(NULL));
    for(i = 0; i < howmany; i++){
        database[i] = (rand() % 10)+1;
        printf("%d | ", database[i]);
    }
    database[i] = (rand() % 10)+1;

    printf("\n\n한 가지 값을 바꿀 수 있습니다. 바꾸시겠습니까?( 변환을 원하시면 1을 입력 )\n");
    scanf(" %d", &input);

    if(input == 1){
        printf("바꿀 자리 입력: ");
        scanf("%d", &change);
        if(change > howmany || change < 0){
            printf("\n존재하지 않는 자리");
            printf("\n값을 변환하지 않습니다.");
        }
        else{
            printf("\n바뀔 숫자 입력: ");
            scanf("%d", &trans);

            database[change-1] = trans;
            printf("\n변환 완료");

        }
    if(input != 1){
        printf("\n값을 변환하지 않습니다.");
		}
    }

    printf("\n\n찾을 값을 입력하세요: ");
    scanf("%d", &data);
    for(i=0; i<howmany; i++){
        if( database[i] == data){
            result = i;
            break;
        }
    }

    if(result != -1)
        printf("\n\n%d(은)는 database의 %d번째 값입니다.\n", data, result+1);
    else
        printf("\n\n검색에 실패했습니다.");
    free(database);
}
