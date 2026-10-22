#include <stdio.h>

int main(void)
{
    unsigned long m, n, r;

    printf("podaj m: ");
    if (scanf("%lu", &m) != 1) {
        printf("bledne dane\n");
        return 1;
    }
    printf("podaj n: ");
    if (scanf("%lu", &n) != 1) {
        printf("bledne dane\n");
        return 1;
    }

    while (n != 0) {
        r = m % n;
        m = n; 
        n = r;
    }

    printf("NWD = %lu\n", m);
    return 0;
}