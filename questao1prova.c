#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// Função para ler os preços dos produtos
void lerprecos(float PrecosProdutos[10]) {
    for (int i = 0; i < 10; i++) {
        printf("\nPreço do %dº produto: ", i + 1);
        scanf("%f", &PrecosProdutos[i]);
    }
}

// Função para calcular estatísticas dos preços
void estatistica(float PrecosProdutos[10], float *MaisBarato, float *MaisCaro, float *PrecoMedio) {
    float soma = 0;
    *MaisBarato = PrecosProdutos[0];
    *MaisCaro = PrecosProdutos[0];

    for (int i = 0; i < 10; i++) {
        soma += PrecosProdutos[i];
        if (PrecosProdutos[i] > *MaisCaro) {
            *MaisCaro = PrecosProdutos[i];
        }
        if (PrecosProdutos[i] < *MaisBarato) {
            *MaisBarato = PrecosProdutos[i];
        }
    }

    *PrecoMedio = soma / 10;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float Produtos[10], Barato, Caro, PrecMedio;

    // Ler os preços
    lerprecos(Produtos);

    // Calcular estatísticas
    estatistica(Produtos, &Barato, &Caro, &PrecMedio);

    // Exibir resultados
    printf("\nMenor Preço: %.2f", Barato);
    printf("\nMaior Preço: %.2f", Caro);
    printf("\nPreço Médio: %.2f\n", PrecMedio);

    return 0;
}
