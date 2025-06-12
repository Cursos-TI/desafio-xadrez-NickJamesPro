#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int torre= 1, Rainha= 1, Bispo = 1; // Variáveis para as peças do xadrez

    printf("-----Início do jogo de xadrez-----\n");
    printf("\n");

    printf("Movimento da torre:\n");
    while ( torre <= 5) // Loop para a torre
    { 
        printf(" Casa %d: Direita\n", torre); // Movimento da torre
        torre++;
        ("\n");
      
    }
    printf("\n");

    printf("Movimento da rainha:\n");
    do {
        printf(" Casa %d: Esquerda\n", Rainha); // Movimento da rainha
        Rainha++;
    } while ( Rainha <= 8); 
   
    printf("\n");
    printf("Movimento do bispo:\n");
    for ( Bispo = 1; Bispo <=5; Bispo++) // Loop para o bispo
    {
        printf(" Casa %d: cima, direita \n", Bispo); // Movimento do bispo
    } 
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");

    int x;
    for (x = 1; x <= 2; x++) { // Loop 'for' para as 2 casas para baixo
        printf(" Casa %d: baixo\n", x);
    }

    int y = 1;
    do { // Loop 'do-while' para 1 casa à esquerda
        printf(" Casa 3: esquerda\n");
        y++;
    } while (y <= 1); // Executa apenas uma vez

    printf("\n");;
    printf("-----Fim do jogo----- \n");

    return 0;
}
