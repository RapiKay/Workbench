#include <stdio.h>

int main(){
    int i,n, x, input;

    scanf("%d %d", &n, &x);

    for(i=0; i<n; i++){
        scanf("%d", &input);
      
        if(x>input)
            printf("%d ", input);
    }
}
