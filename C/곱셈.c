#include <stdio.h>

main()
{
	int i, j, k, l;
	
	printf("�� �� ���� �������� �Ͻðڽ��ϱ�? :");
	scanf("%d", &k);
	printf("\n");
	printf("�� �� ���� �������� �Ͻðڽ��ϱ�? :");
	scanf("%d", &l);
	
	if (k > l){
		printf("\n\n���� ���� �ʽ��ϴ�!");
		return 0;
		}
		
	for(i=k;i<=l;i=i+1){
		for(j=1;j<10;j=j+1){
			printf("%d * %d = %2d \n",i, j, i*j);
		}
	printf("\n");
	}
		
	printf("=================================\n");
	printf("�� %2d���� ����� ��µǾ����ϴ�.", (l-k+1)*9);
}
