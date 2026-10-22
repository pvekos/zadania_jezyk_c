#include <stdio.h>
#include <string.h>

#define MAX 1000

static int czy_liczba(const char *s)
{
    int i;

    if (s[0] == '\0')
        return 0;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] < '0' || s[i] > '9')
            return 0;
    return 1;
}

int main(void)
{
    char a[MAX + 1], b[MAX + 1];
    int wynik[2 * MAX];
    int la, lb, dl, i, j, start;

    printf("Podaj pierwsza liczbe: ");
    if (scanf("%1000s", a) != 1 || !czy_liczba(a)) {
        printf("Bledne dane.\n");
        return 1;
    }
    printf("Podaj druga liczbe: ");
    if (scanf("%1000s", b) != 1 || !czy_liczba(b)) {
        printf("Bledne dane.\n");
        return 1;
    }

    la = (int)strlen(a);
    lb = (int)strlen(b);
    dl = la + lb;

    for (i = 0; i < dl; i++)
        wynik[i] = 0;

    for (i = la - 1; i >= 0; i--)
        for (j = lb - 1; j >= 0; j--)
            wynik[i + j + 1] += (a[i] - '0') * (b[j] - '0');

    for (i = dl - 1; i > 0; i--) {
        wynik[i - 1] += wynik[i] / 10;
        wynik[i] %= 10;
    }

    start = 0;
    while (start < dl - 1 && wynik[start] == 0)
        start++;

    printf("Iloczyn: ");
    for (i = start; i < dl; i++)
        putchar('0' + wynik[i]);
    putchar('\n');

    return 0;
}