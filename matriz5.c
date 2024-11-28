#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Faça um programa para gerar uma matriz 5X6 de números inteiros aleatórios.
///Depois, o programa deve calcular e escrever:
// *A soma de cada uma das 5 linhas
// *A soma de cada uma das 6 colunas
int main() {
    int matriz[5][6];
    int soma_linhas[5] = {0};  // Armazena a soma das 5 linhas
    int soma_colunas[6] = {0}; // Armazena a soma das 6 colunas
    int i, j;

    // Inicializando o gerador de números aleatórios
    srand(time(NULL));

    // Preenchendo a matriz 5x6 com números aleatórios entre 0 e 100
    printf("Matriz 5x6 de números aleatórios:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            matriz[i][j] = rand() % 101; // Gera números aleatórios de 0 a 100
            printf("%d\t", matriz[i][j]);
             soma_linhas[i] += matriz[i][j]; 
             soma_colunas[j] += matriz[i][j];
        }
        printf("\n");
    }

   
    // Exibindo a soma de cada linha
    printf("\nSoma de cada uma das 5 linhas:\n");
    for (i = 0; i < 5; i++) {
        printf("Linha %d: %d\n", i + 1, soma_linhas[i]);
    }

    // Exibindo a soma de cada coluna
    printf("\nSoma de cada uma das 6 colunas:\n");
    for (j = 0; j < 6; j++) {
        printf("Coluna %d: %d\n", j + 1, soma_colunas[j]);
    }

    return 0;
}
