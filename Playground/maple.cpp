#include <stdio.h>

main()
{
	int Easy_zak, Normal_zak, Dec_zak, Normal_hila, SSS_Urs, SS_Urs, S_Urs;
	
	int WA = 3;
	
	printf("���� ���� ���� Ƚ��: ");
	scanf("%d", &Easy_zak);
	
	printf("�븻 ���� ���� Ƚ��: ");
	scanf("%d", &Normal_zak);
	
	printf("����� ���� ����: ");
	scanf("%d", &Dec_zak);
	
	printf("�츣������ SSS�� ���� Ƚ��: ");
	scanf("%d", &SSS_Urs);
	
	if (SSS_Urs < 3)
		printf("�츣������ SS�� ���� Ƚ��: ");
		scanf("%d", &SS_Urs);
		
		if (SSS_Urs + SS_Urs < 3)
			printf("�츣������ S�� ���� Ƚ��: ");
			scanf("%d", &S_Urs);
		
	printf("�븻 ���� ���� Ƚ��: ");
	scanf("%d", &Normal_hila);
	
	int Easy_Zak_cal = Easy_zak * 200000;
	int Normal_Zak_cal = Normal_zak * 612500;
	int Dec_Zak_cal = Dec_zak * 2500000;
	int SSS_Urs_cal = SSS_Urs * 7000000;
	int SS_Urs_cal = SS_Urs * 5300000;
	int S_Urs_cal = S_Urs * 4300000;
	int Normal_Hila_cal = Normal_hila * 8000000;
	
	int Zak_cal = Easy_Zak_cal + Normal_Zak_cal + Dec_Zak_cal;
	int Urs_cal = SSS_Urs_cal + SS_Urs_cal + S_Urs_cal;
	int Hila_cal = Normal_Hila_cal;
	int Count = Zak_cal + Urs_cal + Hila_cal;
	
	printf("========================================\n");
	printf("���� ���� �������� ���� ���� : %d\n", Easy_Zak_cal);
	printf("�븻 ���� �������� ���� ���� : %d\n", Normal_Zak_cal);
	printf("�������� ���� ���� : %d\n", Dec_Zak_cal);
	printf("�츣���� ���� ���� : %d\n", Urs_cal); 
	printf("����� ���� ���� : %d\n", Hila_cal);
	printf("========================================\n");
	printf("\n");
	printf("�� ���� : %d\n", Count);
	if ( Count >= 10000000)
		if ( Count >= 100000000)
			printf("\n1�� �޼� �޼�!!\n");
			
		else printf("\n1õ�� �޼� �޼�!\n");
		
	printf("\n");
	printf
	("========================================\n");
	printf("Made By Rapi_Kay");
	
	
}
