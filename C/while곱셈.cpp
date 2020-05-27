#include <stdio.h>

main()
{
	int i, j, k, l;
	
	printf("몇 번 부터 구구단을 하시겠습니까? :");
	scanf("%d", &k);
	printf("\n");
	printf("몇 번 까지 구구단을 하시겠습니까? :");
	scanf("%d", &l);
	
	while(k<=l){
		int i = k;
		while(i<=l){
			printf("%d * %d = %d\n",i,j,i*j);
			j++
		}
		i++
		printf("\n");
	}
}
