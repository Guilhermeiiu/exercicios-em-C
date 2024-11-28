#include <stdio.h>
int main(){
    // Desenvolva um programa que preencha uma matriz 5X5 de inteiros e depois faça:
//● trocar a segunda e a quinta linha
//● trocar a primeira e a quarta coluna
//● imprimir a matriz modificada
//O programa deverá imprimir a matriz gerada e depois a matriz alterada

int matriz [5][5];
int i,j;
int troca;

for(i=0;i<5;i++){
    for(j=0;j<5;j++){
printf("Elementos [%d][%d] :",i,j);
scanf("%d", &matriz[i][j]);

    }
}
printf("Matriz original:");
for(i=0;i<5;i++){
    for(j=0;j<5;j++){

printf("%d\t", matriz[i][j]);
printf("\n");
    }
}
for (j=0;j<5;j++){
int troca=matriz[4][j];

matriz[4][j]=matriz[1][j];
matriz[1][j]=troca;
}
printf("Matriz modificada:");
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
printf("%d\t", matriz[i][j]);
printf("\n");
    }
}
return 0;
}