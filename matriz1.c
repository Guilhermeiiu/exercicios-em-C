#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia uma matriz 3x5 de números inteiros, depois leia uma
//variável inteira que representa uma coluna da matriz e escreva todas as linhas desta
//coluna.


int main() {
    int matriz[3][5];
    int resp;
    printf("Digite os elementos da matriz 3x5:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nColuna pra imprimir:\n");
    scanf("%d", &resp);
    for (int i = 0; i < 3; i++) {
        printf("%d ", matriz[i][resp]);
    }
    
    return 0;
}
