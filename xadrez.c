#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int torre= 1, Rainha= 1, Bispo = 1; // Variáveis para as peças do xadrez

    while ( torre <= 5) // Loop para a torre
    { 
        printf(" Torre para direita\n"); // Movimento da torre
        torre++;
        ("\n");

    }

    do {
        printf(" Rainha para esquerda\n"); // Movimento da rainha
        Rainha++;
    } while ( Rainha <= 8); 
   

    for ( Bispo = 1; Bispo <=5; Bispo++) // Loop para o bispo
    {
        printf(" Bispo para cima, direita \n"); // Movimento do bispo
    } 

    printf(" Fim do jogo \n");
    return 0;
}
