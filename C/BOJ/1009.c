#include <stdio.h>
#include <math.h>

void process()
{
    int t;
    scanf("%d",&t); 

    while(t--){

        long a, b;
        scanf("%ld %ld",&a,&b);

        long rst = a;
        
        b = b % 4 + 4;

        int i;
        for(i=1;i<b;++i){
            rst = (rst*a)%10;
        }

        if(rst==0){
            rst = 10;
        }
        printf("%ld\n",rst);
    }
}

int main()
{
    process();
    getchar(); getchar();
    return 0;
}
