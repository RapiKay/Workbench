#include <stdio.h>

main()
{
    char word[1000000] = {NULL};
    scanf("%s",word);
    int i,amt = 0;
    for(i = 0; word[i] = NULL; i++){
        if((int)word[i] == 32){
            amt++;
        }
    }
    printf("%d",++amt);
}
