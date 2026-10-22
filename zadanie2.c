/* znajdywanie pierwiastków z delty; 1) interaktywne pytania i odpowiedzi, wraz z komunikatami (wspolczynnik a nie moze byc rowny 0) */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, delta, x1, x2;
        printf("podaj a: ");
        if (scanf("%f", &a) != 1) {
            printf("bledne dane\n");
            return 1;
        }

        printf("podaj b: ");
        if (scanf("%f", &b) != 1) {
            printf("bledne dane\n");
            return 1;
        }

          printf("podaj c: ");
        if (scanf("%f", &c) != 1) {
            printf("bledne dane\n");
            return 1;
        }
        

        if (a == 0) {
            printf("wspolczynnik a nie moze byc równy 0 - nie jest to rownanie kwadratowe\n");
         } else {

                delta = b * b - 4 * a * c;

                if (delta < 0) {
                    printf("brak rozwiazan rzeczywistych\n");
                } else if (delta == 0) {
                    x1 = -b / (2 * a);
                    printf("jedno rozwiązanie x = %f\n", x1);
                } else {
                    x1 = (-b - sqrt(delta)) / (2 * a);
                    x2 = (-b + sqrt(delta)) / (2 * a);
                    printf("x1 = %f\n", x1);
                    printf("x2 = %f\n", x2);
                }
            }
            return 0;

        }


