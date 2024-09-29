#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {

    long num_pontos = 1000000;  // Número de pontos a serem gerados
    long num_dentro_do_circulo = 0;
    
    // Inicializando a semente do gerador de números aleatórios
    srand(time(0));

    for (long i = 0; i < num_pontos; i++) {

        // Gerando dois números aleatórios entre -1 e 1
        double x = (double)rand() / RAND_MAX * 2.0 - 1.0;
        double y = (double)rand() / RAND_MAX * 2.0 - 1.0;
        
        // Verificando se o ponto (x, y) está dentro do círculo de raio 1
        if (x * x + y * y <= 1.0) num_dentro_do_circulo++;
    }

    // Aproximação de pi
    double pi = 4.0 * (double)num_dentro_do_circulo / (double)num_pontos;
    printf("Aproximação de pi: %1.20f\n", pi);

    return 0;
}
