#include <stdio.h>

main()
{
    int Firstinput , Secondinput;
    scanf("%d", &Firstinput);           
    scanf("%d", &Secondinput);

    int Onesecond = Secondinput % 10, Twosecond = Secondinput % 100 - Onesecond, Threesecond = Secondinput % 1000 - Onesecond - Twosecond;

    printf("%d\n", Firstinput * Onesecond);
    printf("%d\n", (Firstinput * Twosecond) / 10);
    printf("%d\n", (Firstinput * Threesecond) / 100);
    printf("%d\n", Firstinput * Secondinput);
}
