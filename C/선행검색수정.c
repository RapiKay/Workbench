#include <stdio.h>
#include <time.h>

void main()
{
    int howmany, *database, i, data, result = -1, input, change, trans, once;
    printf("LinearSearch �����˻��� ���� ������ ���� �Է�: ");
    scanf("%d", &howmany);
    database = calloc(howmany, sizeof(int));

    srand(time(NULL));
    for(i = 0; i < howmany; i++){
        database[i] = (rand() % 10)+1;
        printf("%d | ", database[i]);
    }
    database[i] = (rand() % 10)+1;

    printf("\n\n�� ���� ���� �ٲ� �� �ֽ��ϴ�. �ٲٽðڽ��ϱ�?( ��ȯ�� ���Ͻø� 1�� �Է� )\n");
    scanf(" %d", &input);

    if(input == 1){
        printf("�ٲ� �ڸ� �Է�: ");
        scanf("%d", &change);
        if(change > howmany || change < 0){
            printf("\n�������� �ʴ� �ڸ�");
            printf("\n���� ��ȯ���� �ʽ��ϴ�.");
        }
        else{
            printf("\n�ٲ� ���� �Է�: ");
            scanf("%d", &trans);

            database[change-1] = trans;
            printf("\n��ȯ �Ϸ�");

        }
    if(input != 1){
        printf("\n���� ��ȯ���� �ʽ��ϴ�.");
		}
    }

    printf("\n\nã�� ���� �Է��ϼ���: ");
    scanf("%d", &data);
    for(i=0; i<howmany; i++){
        if( database[i] == data){
            result = i;
            break;
        }
    }

    if(result != -1)
        printf("\n\n%d(��)�� database�� %d��° ���Դϴ�.\n", data, result+1);
    else
        printf("\n\n�˻��� �����߽��ϴ�.");
    free(database);
}
