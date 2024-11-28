#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // Necessário para manipulação de strings

struct InfoProduto {
    char descricao[5][200];
    int quant[5];
    float prec[5];
};

// Função para salvar os dados em um arquivo binário
void salvarNoArqBinario(struct InfoProduto inf) {
    FILE *arq = fopen("loja.bin", "wb"); // "wb" para escrita binária
    if (arq) {
        fwrite(&inf, sizeof(struct InfoProduto), 1, arq); // Escreve toda a struct no arquivo
        fclose(arq);
        printf("Dados salvos com sucesso no arquivo binário 'loja.bin'.\n");
    } else {
        printf("Erro ao abrir o arquivo para escrita.\n");
    }
}

// Função para carregar os dados de um arquivo binário
void carregarDoArqBinario(struct InfoProduto *inf) {
    FILE *arq = fopen("loja.bin", "rb"); // "rb" para leitura binária
    if (arq) {
        fread(inf, sizeof(struct InfoProduto), 1, arq); // Lê toda a struct do arquivo
        fclose(arq);
        printf("Dados carregados com sucesso do arquivo binário 'loja.bin'.\n");
    } else {
        printf("Erro ao abrir o arquivo para leitura.\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configuração de localidade
    struct InfoProduto inf;

    // Entrada de dados do usuário
    for (int i = 0; i < 5; i++) {
        printf("Descrição do produto %d:\n", i + 1);
        fgets(inf.descricao[i], 200, stdin);

        // Remove o '\n' ao final da string capturada por fgets
        size_t len = strlen(inf.descricao[i]);
        if (len > 0 && inf.descricao[i][len - 1] == '\n') {
            inf.descricao[i][len - 1] = '\0';
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("Valor do produto %d:\n", i + 1);
        scanf("%f", &inf.prec[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Quantidade comprada do produto %d:\n", i + 1);
        scanf("%d", &inf.quant[i]);
    }

    // Salva os dados no arquivo binário
    salvarNoArqBinario(inf);

    // Carrega os dados do arquivo binário para exibição (testando a leitura)
    struct InfoProduto infCarregado;
    carregarDoArqBinario(&infCarregado);

    // Exibe os dados carregados para verificar se foram salvos corretamente
    printf("\nProdutos carregados do arquivo binário:\n");
    for (int i = 0; i < 5; i++) {
        printf("Descrição do produto %d: %s\n", i + 1, infCarregado.descricao[i]);
        printf("Preço do produto %d: R$ %.2f\n", i + 1, infCarregado.prec[i]);
        printf("Quantidade comprada do produto %d: %d\n\n", i + 1, infCarregado.quant[i]);
    }

    return 0;
}
