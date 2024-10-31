#include <stdio.h>

void somar(float num1, float num2, float *resultado) {
    *resultado = num1 + num2;          
}

void subtrair(float num1, float num2, float *resultado) {
    *resultado = num1 - num2;          
}

void multiplicar(float num1, float num2, float *resultado) {
    *resultado = num1 * num2;         
}

void dividir(float num1, float num2, float *resultado) {
    if (num2 != 0) {  // Evitar divisão por zero
        *resultado = num1 / num2;
    } else {
        printf("Erro: Divisão por zero.\n");
        *resultado = 0; // Define um valor padrão para evitar problemas
    }
}

int main() {
    float num1, num2, resultado;
    char operacao;

    // Entrada do usuário
    printf("Digite um número inicial: ");
    scanf("%f", &num1);

    do {
        printf("Digite a operação (+, -, *, /) ou 'F' para finalizar: ");
        scanf(" %c", &operacao);  // Espaço antes de %c para ignorar espaços em branco

        if (operacao == 'F') {
            break;
        }

        printf("Digite o próximo número: ");
        scanf("%f", &num2);

        // Escolhe a operação
        if (operacao == '+') {
            somar(num1, num2, &resultado);
        } else if (operacao == '-') {
            subtrair(num1, num2, &resultado);
        } else if (operacao == '*') {
            multiplicar(num1, num2, &resultado);
        } else if (operacao == '/') {
            dividir(num1, num2, &resultado);
        } else {
            printf("Operação inválida.\n");
            continue;
        }

        // Mostra o resultado e atualiza num1 para a próxima operação
        printf("Resultado: %.2f\n", resultado);
        num1 = resultado;

    } while (operacao != 'F');

    return 0;
}
