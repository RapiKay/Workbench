#include <stdio.h>

main()
{
	int kl, k, l;
	
	printf("�� �� ���� ������ �Ͻðڽ��ϱ�? :");
	scanf("%d", &k);
	printf("\n");
	printf("�� �� ���� ������ �Ͻðڽ��ϱ�? :");
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
