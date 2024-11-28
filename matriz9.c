
// Faça um programa para ler em uma matriz as notas de 1a Va e 2a Va de 10
//alunos, depois o programa deverá calcular a média dos alunos, conforme ponderação
//da UEG, e colocar a média na 3a coluna da matriz.
//Por fim o programa deverá mostrar todas as notas digitadas com as médias e informar
//a linha e a coluna da maior nota da 1a VA e da menor nota da 2a V
#include <stdio.h>

int main() {
    float matriz[10][3]; // Matriz para armazenar notas e médias
    float maiores_notas1[10]; // Vetor para armazenar as maiores notas da 1ª VA
    float menores_nota2[10]; // Vetor para armazenar as menores notas da 2ª VA
    int i, j;

    // Leitura das notas dos alunos
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 2; j++) {
            printf("Nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &matriz[i][j]); // Leitura das notas como float
        }
    }

    // Cálculo da média e armazenamento na terceira coluna
    for (i = 0; i < 10; i++) {
        matriz[i][2] = (matriz[i][0] + matriz[i][1]) / 2; // Calcula a média aritmética
    }

    // Encontrar a maior nota da 1ª VA e a menor nota da 2ª VA
    float maior1 = matriz[0][0];
    int linha_maior1 = 0;

    float menor2 = matriz[0][1];
    int linha_menor2 = 0;

    for (i = 0; i < 10; i++) {
        if (matriz[i][0] > maior1) {
            maior1 = matriz[i][0];
            linha_maior1 = i;
        }
        if (matriz[i][1] < menor2) {
            menor2 = matriz[i][1];
            linha_menor2 = i;
        }
    }

    // Impressão da matriz com as notas e médias
    printf("\nNotas e médias:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Impressão da maior nota da 1ª VA e da menor nota da 2ª VA
    printf("A maior nota da 1ª VA foi: %.2f na linha %d\n", maior1, linha_maior1 + 1);
    printf("A menor nota da 2ª VA foi: %.2f na linha %d\n", menor2, linha_menor2 + 1);

    return 0;
}
