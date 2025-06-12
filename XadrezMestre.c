#include <stdio.h>

// Função recursiva para a Torre
void moverTorre(int casa) {
    if (casa > 5) return;
    printf(" Casa %d: Direita\n", casa);
    moverTorre(casa + 1);
}

// Função recursiva para a Rainha
void moverRainha(int casa) {
    if (casa > 8) return;
    printf(" Casa %d: Esquerda\n", casa);
    moverRainha(casa + 1);
}

// Função recursiva + loops aninhados para o Bispo
void moverBispo(int vertical, int horizontal) {
    if (vertical > 3) return;

    for (int h = horizontal; h <= vertical + 2; h++) {
        printf(" Casa v%d-h%d: cima, direita\n", vertical, h);
    }

    moverBispo(vertical + 1, horizontal + 1);
}

int main() {
    printf("-----Início do jogo de xadrez-----\n\n");

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(1);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(1);
    printf("\n");

    // Movimento do Bispo 
    printf("Movimento do Bispo:\n");
    moverBispo(1, 1);
    printf("\n");

    // Movimento do Cavalo 
    printf("Movimento do Cavalo:\n");
    int movimentos = 0;
    for (int v = 3; v >= 1; v--) { // vertical (de cima para baixo)
        for (int h = 1; h <= 3; h++) { // horizontal
            if (v == 2 && h == 2) continue; // ignora essa posição

            printf(" Passo %d: ", ++movimentos);
            if (v >= 2) {
                printf("cima ");
            }
            if (h == 3) {
                printf("direita ");
            }
            printf("\n");

            if (movimentos == 3) break;
        }
        if (movimentos == 3) break;
    }

    printf("\n-----Fim do jogo-----\n");
    return 0;
}