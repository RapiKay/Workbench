#include <stdio.h>

main()
{
	int i, j, k, l;
	
	printf("몇 번 부터 구구단을 하시겠습니까? :");
	scanf("%d", &k);
	printf("\n");
	printf("몇 번 까지 구구단을 하시겠습니까? :");
	scanf("%d", &l);
	
	if (k > l){
		printf("\n\n값이 맞지 않습니다!");
		return 0;
		}
		
	for(i=k;i<=l;i=i+1){
		for(j=1;j<10;j=j+1){
			printf("%d * %d = %2d \n",i, j, i*j);
		}
	printf("\n");
	}
		
	printf("=================================\n");
	printf("총 %2d개의 결과가 출력되었습니다.", (l-k+1)*9);
}
