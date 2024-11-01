#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Verifica se o ano é bissexto
int verificaAnoBissexto(int ano) {
    return (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
}

// Verifica se a data é válida
int verificaDataValida(int dia, int mes, int ano) {
    // Meses com 31 dias
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return (dia >= 1 && dia <= 31);
    }
    // Meses com 30 dias
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return (dia >= 1 && dia <= 30);
    }
    // Fevereiro
    else if (mes == 2) {
        if (verificaAnoBissexto(ano)) {
            return (dia >= 1 && dia <= 29);
        } else {
            return (dia >= 1 && dia <= 28);
        }
    }
    // Mês inválido
    else {
        return 0;
    }
}

// Converte o número do mês para o nome do mês
const char* converteMesParaTexto(int mes) {
    const char* meses[] = {
        "inválido", "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };
    return (mes >= 1 && mes <= 12) ? meses[mes] : "inválido";
}

int main() {
    char data[11];
    int dia, mes, ano;

    while (1) {
        printf("Digite a data de nascimento (dd/mm/aaaa): ");
        scanf("%10s", data);

        // Converte os componentes da data para inteiros
        dia = atoi(strtok(data, "/"));
        mes = atoi(strtok(NULL, "/"));
        ano = atoi(strtok(NULL, "/"));

        // Verifica se a data é válida
        if (verificaDataValida(dia, mes, ano)) {
            printf("%02d de %s de %d\n", dia, converteMesParaTexto(mes), ano);
            break; // Sai do loop se a data for válida
        } else {
            printf("Data Inválida!\n");
        }
    }

    return 0;
}
