#include <stdio.h>

main()
{
	int i, j, k, l;
	
	printf("�� �� ���� �������� �Ͻðڽ��ϱ�? :");
	scanf("%d", &k);
	printf("\n");
	printf("�� �� ���� �������� �Ͻðڽ��ϱ�? :");
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
