#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    double x, y;
    unsigned long long i, j = 0;
    unsigned long long n = 1000000;  // Definindo o valor de n
    double pi_estimation;

    srand(time(0));  // Inicializando a semente para o rand()

    for (i = 1; i <= n; i++) {
        x = (double) rand() / RAND_MAX;
        y = (double) rand() / RAND_MAX;

        if (x * x + y * y <= 1) {
            j += 1;
        }
    }

    pi_estimation = 4.0 * (double) j / n;  // Calculando a estimativa de pi
    printf("%1.20f\n", pi_estimation);     // Imprimindo o valor estimado de pi

    return 0;
}