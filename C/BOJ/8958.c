#include <stdio.h>

main()
{
    //5
    //OOXXOOXOXXO = 8
    //OXOXXXOOXXOOXOXOOOX = 15
    //OX = 1
    //OXXXOXXO = 3
    //OXXOXXXXOOO = 8

	// O = 79
	// X = 88

    // char arr[100] = {NULL};
    int i,input,j,result,tmp;
    int cnt = 0;
    int stack = 1;

    scanf("%d",&input);
//    printf("\n test case input complete! starting \"for\"\n");
    for(i=1;i<=input;i++){
        char arr[100] = {NULL};
//        printf("* | ");
        scanf("%s",&arr);
        j = 0;
        while(1){
            if(arr[j] == NULL){
                tmp = j;
//                    printf("\nj complete\n");
                break;
            }
            else{
//                printf("=");
                j++;
                continue;
            }
        }
        while(1){
            if(arr[cnt] == 'O'){
                result = result + stack;
                stack++;
            }
            else{
                stack = 1;
            }
            cnt++;
            if(cnt == tmp)
                break;
        }   
        printf("%d\n",result);
        result = 0; 
        stack = 1;
        cnt = 0;
    }
}
