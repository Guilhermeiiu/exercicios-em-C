#include <stdio.h>

void frac(float Numero, int *Inteiro, float *Fracionario) {
    *Inteiro = (int)Numero;                     // Armazena a parte inteira
    *Fracionario = Numero - *Inteiro;            // Calcula a parte fracionária
}

int main() {
    float numero, parteFracionaria;
    int parteInteira;

    // Entrada do usuário
    printf("Digite um número real: ");
    scanf("%f", &numero);

    // Chamada da função frac para calcular parte inteira e fracionária
    frac(numero, &parteInteira, &parteFracionaria);

    // Exibição dos resultados
    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionária: %.2f\n", parteFracionaria);

    return 0;
}
