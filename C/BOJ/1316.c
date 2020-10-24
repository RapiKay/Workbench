#include <stdio.h>
#include <stdbool.h>

main()
{
    int input,i,j;
    bool list[26] = {false, };
    scanf("%d",&input);
    
    char str[input][100];
    int tmp;
    int score[26] = {0, },check[26];
    for(i=1;i<input;i++){
        scanf("%s", str[i]);
    }

    for(i=1;i<=input;i++){  
        for(j=0;str[i][j]!=NULL;j++){
            scanf("%d",&tmp);
            score[tmp-97]++;    
            if(str[i][j] != str[i][j+1]&&list[tmp-97]==false)
                check[tmp-97] = score[tmp-97];
                list[tmp-97] = true;
    	}
    }

    int result = 0;

    for(i=1;i<=26;i++){
        if(check[i] == score[i]&&list[i] == true)
            result++;
    }

    printf("%d",result);
}
