#include <stdio.h>

main()
{
    int Monthinput, Dayinput;
    printf("������ �Է��ϴ� ���α׷�\n");
    printf("�� �Է�\n");
    scanf("%d", &Monthinput);
    if( Monthinput > 12 ){
        printf("�������� �ƴմϴ�.");
        return 0;
    }
    if( Monthinput < 1){
        printf("�������� �ƴմϴ�.");
        return 0;
    }
    printf("\n�� �Է�\n");
    scanf("%d", &Dayinput);
    if( Dayinput > 31){
        printf(" �ƴ� �װ� �� ");
        return 0;
    }
    if( Dayinput < 1){
        printf(" �ƴ� �װ� �� ");
        return 0;
    }

    if( Monthinput == 8){
        if( Dayinput == 16){
            printf("\n �� �� �����̿���");
            return 0;
        }
    }
    printf("\n\n\n\n\n\n\n\n\n����� ������ %d��, %d�� �Դϴ�.", Monthinput, Dayinput);
}
