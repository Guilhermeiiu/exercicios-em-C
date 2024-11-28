#include <stdio.h>
//Desenvolva um programa que preencha uma matriz 3 x 3 com números inteiros e
//mostre uma mensagem dizendo se a matriz digitada é simétrica ou não. Uma matriz
//só pode ser simétrica se A[i,j] = A[j,i]
int main() {
    int matriz[3][3];
    int i, j;
    int simetrica ; // Variável para verificar se a matriz é simétrica

    // Preenchendo a matriz 3x3
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verificando se a matriz é simétrica
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrica = 0; // Se encontrar um elemento que não é igual ao seu transposto, a matriz não é simétrica
               break;
            }
            else{
                simetrica+=1;
            }
        }
       
    }

    // Exibindo o resultado
    if (simetrica!=0) {
        printf("\nA matriz é simétrica.\n");
    } else {
        printf("\nA matriz não é simétrica.\n");
    }

    return 0;
}
