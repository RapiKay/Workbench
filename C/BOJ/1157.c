#include <stdio.h>

main()
{
    char word[1000001] = {NULL};
    int cnt[26] = {0, }; 
    int i,j;
    int max = 0,loc;
    scanf("%s",word);

    for(i=0;word[i]!='\0';i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            word[i] -= 32;
        }
        cnt[word[i]-'A']++;
    }
    for(i=0;i<26;i++){
        if(max<cnt[i]){
            max = cnt[i];
            loc = i;
        }
        else if(max == cnt[i]){
            loc = '?';
        }
    }
    if(loc == '?'){
        printf("?");
    }
    else{
        printf("%c",loc + 'A');
    }
}
