#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned long N, i, j;
    char *czy_pierwsza;

    printf("Podaj N: ");
    if (scanf("%lu", &N) != 1) {
        printf("Bledne dane.\n");
        return 1;
    }

    if (N < 3) {
        printf("Brak liczb pierwszych mniejszych od %lu.\n", N);
        return 0;
    }

    czy_pierwsza = (char *)malloc((size_t)N);
    if (czy_pierwsza == NULL) {
        printf("Brak pamieci.\n");
        return 1;
    }

    for (i = 0; i < N; i++)
        czy_pierwsza[i] = 1;
    czy_pierwsza[0] = 0;
    czy_pierwsza[1] = 0;


    for (i = 2; i * i < N; i++)
        if (czy_pierwsza[i])
            for (j = i * i; j < N; j += i)
                czy_pierwsza[j] = 0;

    printf("Liczby pierwsze mniejsze od %lu:\n", N);
    for (i = 2; i < N; i++)
        if (czy_pierwsza[i])
            printf("%lu\n", i);

    free(czy_pierwsza);
    return 0;
}