#include <stdio.h>
#include <math.h>

#define NMAX 1000

int main(void) {
    double x[NMAX];
    int n = 0;

    while (n < NMAX && scanf("%lf", &x[n])==1)
n++;

    if (n==0) {printf("brak_danych\n"); return 1;}

    double suma = 0.0; 
    for (int i = 0; i < n; i++)
        suma += x[i];
    double srednia = suma/n;

    double suma_kwadratow = 0.0;
    for (int i = 0; i < n; i++)
    suma_kwadratow +=(x[i]-srednia) * (x[i]-srednia);
double odchylenie = sqrt(suma_kwadratow/n);

if (n == NMAX) {
    double nadmiar;
    if (scanf("%lf", &nadmiar) == 1) {
        fprintf(stderr, "danych jest zbyt duzo, nadmiar zostal pominiety\n");
    }
}


    printf("Liczba_danych: %d\n", n);
    printf("srednia: %f\n", srednia);
    printf("odchylenie standardowe: %f\n", odchylenie);
    return 0;

}
