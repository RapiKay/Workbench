#include <stdio.h>

main()
{
	int i = 1, j;
/*	for(i = 1; i <= 9; i++){
		for(j = 0; j <= 8; j++){
			printf("%d이(가) %d번 출력됨.\n", j,i);
		}
	} */

    while(i <= 9){
        for(j = 0; j <= 8; j++){
			printf("%d이(가) %d번 출력됨.\n", j,i);
		}
		i++;
    }
}


