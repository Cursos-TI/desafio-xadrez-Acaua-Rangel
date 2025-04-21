#include <stdio.h>

int main() {
    // Bispo diagonal 5 casas diagonal superior direito
    for (int b=1; b<=5; b++) {
        printf("Bispo etapa %d: Cima\n", b);
        printf("Bispo etapa %d: Direita\n", b);
    }

    // Rainha 8 casas horizontal esquerda

    int r = 1;

    while (r <=8) {
        printf("Rainha etapa %d: Esquerda\n", r);
        r++;
    }
    

    // Torre 5 casas a frente vertical

    int t=1;

    do {
        printf("Torre etapa %d: Cima\n", t);
        t++;
    } while (t<=5);
    

    return 0;
}