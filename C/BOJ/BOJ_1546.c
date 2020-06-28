#include <stdio.h>

main()
{
    int input;
    int i = input;
    double list[1000],avg = 0,max = 0;
    scanf("%d",&input);
    if(input > 1000)
        input = 1000;
        
    for(i=1;i<=input;i++){
        scanf("%lf",&list[i]);
        if(max < list[i])
            max = list[i];
    }

    for(i=1;i<=input;i++){
        list[i]=list[i]/max*100;
        avg = avg + list[i];
    }

    printf("%lf",avg/(double)input);
}
