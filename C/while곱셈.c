#include <stdio.h>

main()
{
	int kl, k, l;
	
	printf("몇 번 부터 곱셈을 하시겠습니까? :");
	scanf("%d", &k);
	printf("\n");
	printf("몇 번 까지 곱셈을 하시겠습니까? :");
	scanf("%d", &l);
	
	int i = k;
	
	while(k<(l+1)){
		int kl = i;
		while(kl<(l+1)){
			printf("%d * %d = %d\n",k,kl,k*kl);
			kl++;
		}
		k++;
		printf("\n");
	}
}
