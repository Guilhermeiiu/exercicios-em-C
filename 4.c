#include <stdio.h>
#include <locale.h>
int urna() {
    int voto;
    do {
        printf("--------------------------------------------------------\n");
        printf("         ELEIÇÕES PARA SÍNDICO\n");
        printf("--------------------------------------------------------\n");
        printf("1. Joaquim Manoel Andrade\n");
        printf("2. Mariana Castro\n");
        printf("3. Nulo\n");
        printf("4. Branco\n");
        printf("5. Relatório\n");
        printf("--------------------------------------------------------\n");
        printf("Digite o voto (1-5): ");
        scanf("%d", &voto);

        if (voto < 1 || voto > 5) {
            printf("Voto inválido. Digite novamente.\n");
        }
    } while (voto < 1 || voto > 5);

    return voto;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int voto, totalVotos = 0;
    int votosJoaquim = 0, votosMariana = 0, votosNulo = 0, votosBranco = 0;

    while (1) {
        voto = urna();
        
        if (voto == 5) {
            break;  
        }

        totalVotos++;
        switch (voto) {
            case 1:
                votosJoaquim++;
                break;
            case 2:
                votosMariana++;
                break;
            case 3:
                votosNulo++;
                break;
            case 4:
                votosBranco++;
                break;
        }
    }


    float percNulos = (totalVotos > 0) ? (votosNulo / (float)totalVotos) * 100 : 0;
    float percBrancos = (totalVotos > 0) ? (votosBranco / (float)totalVotos) * 100 : 0;

 
    char vencedor[50];
    if (votosJoaquim > votosMariana) {
        sprintf(vencedor, "Joaquim Manoel Andrade");
    } else if (votosMariana > votosJoaquim) {
        sprintf(vencedor, "Mariana Castro");
    } else {
        sprintf(vencedor, "Empate");
    }

  
    printf("\n----------------- RELATÓRIO -----------------\n");
    printf("Total de votos registrados: %d\n", totalVotos);
    printf("Votos para Joaquim Manoel Andrade: %d\n", votosJoaquim);
    printf("Votos para Mariana Castro: %d\n", votosMariana);
    printf("Votos nulos: %d (%.2f%%)\n", votosNulo, percNulos);
    printf("Votos brancos: %d (%.2f%%)\n", votosBranco, percBrancos);
    printf("Candidato vencedor: %s\n", vencedor);

    return 0;
}
