#include <stdio.h>

int main() {
    //Desenvolva um programa para preencher uma matriz 3X3 e escrever os elementos
//desta matriz, exceto os elementos da Diagonal Principal.
    int matriz[3][3];
    int i, j;

    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nElementos da matriz, exceto a diagonal principal:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i != j) { 
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n"); 
    }

    return 0;
}
