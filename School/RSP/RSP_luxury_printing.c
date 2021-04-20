#include <stdio.h>
#include <windows.h>

main()
{
    int i;

    char a[10] = {"rlatpfud"};
    for(i=0;i<=10;i++){
        printf("%c",a[i]);
        Sleep(200);
    }
}