#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 50

void preencherVetor(int vetor[]) {
    srand(time(NULL)); 
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 101; 
    }
}

void ordenarVetor(int vetor[]) {
    int i, j, aux;
    for (i = 0; i < TAMANHO - 1; i++) {
        for (j = 0; j < TAMANHO - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux; }
        }
    }
}

void imprimirVetor(int vetor[]) {
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int numeros[TAMANHO];

    preencherVetor(numeros);

    printf("Vetor antes da ordenação:\n");
    imprimirVetor(numeros);

    ordenarVetor(numeros);

    printf("Vetor após a ordenação:\n");
    imprimirVetor(numeros);

    return 0;
}
