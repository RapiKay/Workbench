#include <stdio.h>

main()
{
	int i = 1, j;
/*	for(i = 1; i <= 9; i++){
		for(j = 0; j <= 8; j++){
			printf("%d��(��) %d�� ��µ�.\n", j,i);
		}
	} */

    while(i <= 9){
        for(j = 0; j <= 8; j++){
			printf("%d��(��) %d�� ��µ�.\n", j,i);
		}
		i++;
    }
}


