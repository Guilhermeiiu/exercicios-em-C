#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // Necessário para manipulação de strings

struct InfoProduto {
    char descricao[5][200];
    int quant[5];
    float prec[5];
};

void lerNoArq(struct InfoProduto inf) {
    FILE *arq = fopen("loja.txt", "r");
    if (arq) {
        for (int i = 0; i < 5; i++) {
            fscanf(arq, "Descrição do produto %d: %s\n", i + 1, inf.descricao[i]);
            fscanf(arq, "Preço do produto %d: R$ %.2f\n", i + 1, inf.prec[i]);
            fscanf(arq, "Quantidade comprada do produto %d: %d\n\n", i + 1, inf.quant[i]);
        }}
        fclose(arq);
       }
     
        void salvarNoArq(struct InfoProduto inf) {
    FILE *arq = fopen("loja.txt", "w");
    if (arq) {
        for (int i = 0; i < 5; i++) {
            fprintf(arq, "Descrição do produto %d: %s\n", i + 1, inf.descricao[i]);
            fprintf(arq, "Preço do produto %d: R$ %.2f\n", i + 1, inf.prec[i]);
            fprintf(arq, "Quantidade comprada do produto %d: %d\n\n", i + 1, inf.quant[i]);
        }
        fclose(arq);
        printf("Dados salvos com sucesso no arquivo 'loja.txt'.\n");
    } else {
        printf("Erro ao abrir o arquivo para escrita.\n");
    }
}


int main() {
    setlocale(LC_ALL, ""); // Configuração de localidade
    struct InfoProduto inf;
    char resp;
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
printf("\nVocê quer ler o arquivo?");
scanf("%c",&resp);
if(resp=='s'){
    lerNoArq(inf);
}
else printf("Tchau..");

    salvarNoArq(inf);

    return 0;
}
