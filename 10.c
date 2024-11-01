#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PALAVRAS 10
#define MAX_COMPRIMENTO 20

// Função que verifica quais palavras começam e terminam com a mesma letra
void verificaPrimeiraUltimaIguais(int *contador, char matriz[NUM_PALAVRAS][MAX_COMPRIMENTO], int vetorLinhas[]) {
    *contador = 0;
    for (int i = 0; i < NUM_PALAVRAS; i++) {
        int comprimento = strlen(matriz[i]);
        if (comprimento > 0) {
            // Obtém a primeira e a última letra, convertendo para minúsculas
            char primeiraLetra = tolower(matriz[i][0]);
            char ultimaLetra = tolower(matriz[i][comprimento - 1]);

            // Verifica se a primeira e a última letra são iguais
            if (primeiraLetra == ultimaLetra) {
                vetorLinhas[*contador] = i; // Armazena o índice da linha
                (*contador)++;
            }
        }
    }
}

int main() {
    char palavras[NUM_PALAVRAS][MAX_COMPRIMENTO];
    int linhasComLetrasIguais[NUM_PALAVRAS];
    int contador = 0;

    // Leitura das palavras
    printf("Digite 10 palavras (máximo de 20 caracteres cada):\n");
    for (int i = 0; i < NUM_PALAVRAS; i++) {
        printf("Palavra %d: ", i + 1);
        scanf("%19s", palavras[i]); // Lê no máximo 19 caracteres (+1 para o terminador nulo)
    }

    // Chama a função para verificar as palavras
    verificaPrimeiraUltimaIguais(&contador, palavras, linhasComLetrasIguais);

    // Exibe os resultados
    if (contador > 0) {
        printf("\nPalavras em que a primeira e a última letra são iguais:\n");
        for (int i = 0; i < contador; i++) {
            printf("Linha %d: %s\n", linhasComLetrasIguais[i] + 1, palavras[linhasComLetrasIguais[i]]);
        }
    } else {
        printf("\nNenhuma palavra encontrada em que a primeira e a última letra sejam iguais.\n");
    }

    return 0;
}
