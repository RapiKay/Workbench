#include <stdio.h>
#include <math.h>

main()
{
	int x = 0;
	int y;
	
	scanf("%d", &y);

	while(y>0){
		x++;
		y /= 10;
	}
	printf("%d", x);
}
