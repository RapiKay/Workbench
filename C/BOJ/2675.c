#include <stdio.h>

main()
{
    int cas,i,rpt,end,j,k;
    scanf("%d",&cas);

    for(k=0;k<cas;k++){
        char a[100] = {NULL};
        scanf("%d",&rpt);
//        printf("rpt : %d | ",rpt);
        scanf("%s",a);
//        printf("a[] : %s",a);
        i = 0;
        while(1){
            if(a[i] == NULL){
                end = i - 1;  
//                printf("\n final location : %d",end);
                break;
            }
            i++;
//            printf("\n loading... | i status : %d",i);
        }   
        for(i=0;i<=end;i++){
            for(j=0;j<rpt;j++){
                printf("%c",a[i]);
            }
            if(i == end)
                printf("\n");
        }
//        printf("case %d comeplete\n",k);
    }
}