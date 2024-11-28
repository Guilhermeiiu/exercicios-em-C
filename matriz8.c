#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[10][10];
    int maiores_linha[10]; // Vetor com os maiores elementos de cada linha
    int menores_coluna[10]; // Vetor com os menores elementos de cada coluna
    int i, j;

    // Inicializando o gerador de números aleatórios
    srand(time(NULL));

    // Preenchendo a matriz 10x10 com números aleatórios entre 0 e 100
    printf("Matriz 10x10 gerada:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 101; // Gera números aleatórios entre 0 e 100
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Encontrando os maiores elementos de cada linha
    for (i = 0; i < 10; i++) {
        int maior = matriz[i][0]; // Assume que o primeiro elemento é o maior
        for (j = 1; j < 10; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j]; // Atualiza o maior se encontrar um número maior
            }
        }
        maiores_linha[i] = maior; // Armazena o maior número dessa linha
    }

    // Encontrando os menores elementos de cada coluna
    for (j = 0; j < 10; j++) {
        int menor = matriz[0][j]; // Assume que o primeiro elemento é o menor
        for (i = 1; i < 10; i++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j]; // Atualiza o menor se encontrar um número menor
            }
        }
        menores_coluna[j] = menor; // Armazena o menor número dessa coluna
    }

    // Exibindo o vetor com os maiores elementos de cada linha
    printf("\nMaiores elementos de cada linha:\n");
    for (i = 0; i < 10; i++) {
        printf("Linha %d: %d\n", i + 1, maiores_linha[i]);
    }

    // Exibindo o vetor com os menores elementos de cada coluna
    printf("\nMenores elementos de cada coluna:\n");
    for (j = 0; j < 10; j++) {
        printf("Coluna %d: %d\n", j + 1, menores_coluna[j]);
    }

    return 0;
}
