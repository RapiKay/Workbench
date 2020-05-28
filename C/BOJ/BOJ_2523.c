#include <stdio.h>

main()
{
    int i = 1, j = 0, k, input;
    scanf("%d", &input);

    while(i<=input){
//        printf("%d | ", i);
        
		while(j<i){
			printf("*");
			j++;
		}
        i++;
        j = 0;
        printf("\n");
    }    
	
	int t = input-1;
	
	while(t>0){
//		printf("%d | ", i);
		
		while(j<t){
			printf("*");
			j++;
		}
		j = 0;
		t--;
		printf("\n");
		i++;
	}
}
