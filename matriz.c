#include <stdio.h>
#include <stdlib.h>

#define linhas 3
#define colunas 2

int main() {
    int Numeros[linhas][colunas];
    int I, J;

    // Preenchendo a matriz corretamente
    Numeros[0][0] = 10;
    Numeros[0][1] = 14;
    
    Numeros[1][0] = -9;
    Numeros[1][1] = 19;
    
    Numeros[2][0] = 8;
    Numeros[2][1] = 0;

    // Exibindo os valores da matriz
    for (I = 0; I < linhas; I++) {
        for (J = 0; J < colunas; J++) {
            printf("%d\n", Numeros[I][J]);
        }
    }

    system("pause");
    return 0;
}
