#include <stdio.h>

main()
{
    int input,input_2,i,j;
    double out[100] = {0,};
    double ave;

    scanf("%d",&input);

    for(i=0;i<input;i++)
    {
        int pro = 0,total = 0;
        scanf("%d",&input_2);
        int arr[1000] = {0, };
        for(j=0;j<input_2;j++){
            scanf("%d",&arr[j]);
        }

        for(j=0;j<input_2;j++){
            total += arr[j];
        }   

        ave = (double)total / input_2;

        for(j=0;j<input_2;j++){ 
            if(arr[j] > ave){
                pro++;
            }
        }
 
        out[i] = (double)pro / input_2 * 100;
        pro = 0;
        total = 0;
    }

    for(i=0;i<input;i++){
        printf("%.3lf%%\n",out[i]);
    }   
}