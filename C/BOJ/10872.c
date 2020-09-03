#include <stdio.h>

<<<<<<< HEAD
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
=======
int fact(int num){
    if(num > 1)
        return num*fact(num-1);
    else
        return 1;    
}
	//.
int main()
{
    int N;

    scanf("%d",&N);
    printf("%d\n",fact(N));
    
    return 0;
}
>>>>>>> 6a63c378d6f2e658183710137d0878cb1f87192f
