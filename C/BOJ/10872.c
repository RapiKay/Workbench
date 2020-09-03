#include <stdio.h>

int main(){
	int N;
    int ret = 1;

	scanf("%d",&N);

    if(N == 0){
        printf("1");
        return 0;
    }
	for( ; N != 1 ; N --)
		ret *= N;

	printf("%d\n", ret);
	return 0;
}