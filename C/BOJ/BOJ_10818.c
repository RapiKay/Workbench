#include <stdio.h>

int main() {

    int n, i;
    int min = 1000000;
    int max = -1000000;
    int a = 0;

    scanf("%d", &n);

    for(i=0;i<n;i++) {

        scanf("%d",&a);

        if (a < min) {
            min = a;
        }

        if (a > max) {
            max = a;
        }
    }

    printf("%d %d", min, max);

}