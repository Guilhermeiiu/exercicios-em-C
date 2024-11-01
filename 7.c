#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void construirVetor(int matriz[5][5]){
	int i,j;
	for (i==0;i<5;i++){
	  for (j==0;j<5;j++){
	  	printf("Digite:\n");
	  	scanf("%d", &matriz[i][j]);
	  }
	}
}
int somaMatriz(int matriz[5][5]){
	int i,j,soma=0;
	for (i==0;i<5;i++){
	  for (j==0;j<5;j++){
	  	soma+=matriz[i][j];
	  }
	}
	return soma;
}
int main(){
	int matriz[5][5];
	construirVetor(matriz);
	int resultado=somaMatriz(matriz);
printf("A soma da matriz é: %d",resultado);
return 0;
}
