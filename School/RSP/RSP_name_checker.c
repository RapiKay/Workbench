#include <stdio.h>

main()
{
    char this[100] = {"rlatpfud"};

    printf("%s\n", this);

    if(this[100] == "rlatpfud")
        printf("true");
    else
        printf("false");
}