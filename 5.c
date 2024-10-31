
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define TAMANHO 15

void preencherVetor(int vetor[]) {
    srand(time(NULL)); 
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 101;
    }
}

void imprimirVetor(int vetor[]) {
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int contPar(int vetor[]) {
    int par = 0;
    for (int i = 0; i < TAMANHO; i++) {
        if (vetor[i] % 2 == 0) {
            par++;
        }
    }
    return par;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int vetor[TAMANHO];

    preencherVetor(vetor);

    printf("Vetor gerado: ");
    imprimirVetor(vetor);

    
    printf("Quantidade de números pares: %d\n", contPar(vetor));

    return 0;
}
