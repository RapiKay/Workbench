#include <stdio.h>

main()
{
    int input;
    char buffer[20] = {0, };
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        FILE *playerIDfp = fopen("User1ID", "r"); 

            fgets(buffer, sizeof(buffer), playerIDfp);
        break;
    
    default:
        break;
    }
}
3