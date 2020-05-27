#include <stdio.h>

main()
{
	char Weapon;
	
	printf("파프니르 무기 추옵표\n");
	printf("원하는 무기 종류를 입력하세요:");
	scanf("%c", &Weapon);
	if ( Weapon != '튜너')
		printf("test");
	else
		printf("알 수 없는 무기 입니다.");
}
