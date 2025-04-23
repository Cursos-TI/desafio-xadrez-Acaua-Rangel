#include <stdio.h>

// Função recursiva para mover a Torre para cima
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Torre etapa %d: Cima\n", passos);
    moverTorre(passos - 1);
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Rainha etapa %d: Esquerda\n", passos);
    moverRainha(passos - 1);
}

// Função recursiva com loops aninhados para mover o Bispo na diagonal superior direita
void moverBispo(int vertical, int maxHorizontal) {
    if (vertical == 0) return;

    // Loop interno simula o movimento horizontal para a direita
    for (int h = 1; h <= maxHorizontal; h++) {
        printf("Bispo etapa V%d-H%d: Direita\n", vertical, h);
    }

    // Após o movimento horizontal, move verticalmente
    printf("Bispo etapa V%d: Cima\n", vertical);
    
    moverBispo(vertical - 1, maxHorizontal); // chamada recursiva
}

// Função com loops complexos para o movimento do Cavalo (em L)
void moverCavalo(int movimentos) {
    int movimentosFeitos = 0;

    for (int cima = 1; cima <= 2 && movimentosFeitos < movimentos; cima++) {
        for (int direita = 1; direita <= 1; direita++) {
            if (cima == 2 && direita == 1) {
                printf("Cavalo movimento %d: Cima\n", movimentosFeitos + 1);
                printf("Cavalo movimento %d: Cima\n", movimentosFeitos + 1);
                printf("Cavalo movimento %d: Direita\n", movimentosFeitos + 1);
                movimentosFeitos++;
                break; // sai do segundo loop após um movimento válido
            }
        }
        if (movimentosFeitos >= movimentos) break;
    }
}

int main() {
    // Quantidade de casas para movimentar cada peça
    int passosTorre = 5;
    int passosRainha = 8;
    int passosBispoVertical = 5;
    int passosBispoHorizontal = 1; // apenas 1 movimento para direita por nível
    int movimentosCavalo = 2;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(passosTorre);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(passosRainha);
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(passosBispoVertical, passosBispoHorizontal);
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo(movimentosCavalo);
    printf("\n");

    return 0;
}
