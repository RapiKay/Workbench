#include <stdio.h>
#include <string.h>

int main (void)
{
    char source[6] = "hello";
    char name[50] = "";

    printf("name�� �� ����: %s \n",strcpy(name, source));
    return 0;
}