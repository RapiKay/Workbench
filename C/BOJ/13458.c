#include <stdio.h>

main()
{
    int room,i,sum=0;
    scanf("%d",&room);
    int tmp;

    for(i=0;i<room;i++){
        scanf("%d",&tmp);
        sum += tmp;
    }

    printf("\n fst sum : %d \n", sum);

    int main, srv;

    scanf("%d %d", &main, &srv);

    sum -= (room * main);    

    printf("\n scn sum : %d \n");
    int rst = sum / srv;    

    if(sum % srv != 0)
        rst++;
    
    rst += room;

    printf("%d",rst);
}