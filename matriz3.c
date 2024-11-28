#include <stdio.h>
#include <math.h>
int main(){
//Faça um programa que preencha duas matrizes de 3X3, depois some seus valores
//em outra matriz 3X3 e por fim escreva a matriz resultante.
int matriz [3][3];
int i, j;
int matriz2 [3][3];
int x,y;
int matriz3 [3][3];
int a,b;
printf("Digite os elementos da matriz 1:\n");
for(i=0;i<3;i++){
    for (j=0; j<3;j++){
    
     printf("Elemento [%d][%d]: ", i, j);
    scanf("%d", &matriz[i][j]);
}}
printf("Digite os elementos da matriz 2:\n");
for(x=0;x<3;x++){
    for(y=0;y<3;y++){
        printf("Elemento [%d][%d]:", x,y);
        scanf("%d", &matriz2[x][y]);
    }

}
for(a=0;a<3;a++){
    for(b=0;b<3;b++){
        matriz3[a][b]=matriz[a][b]+matriz2[a][b];

    }
}
printf("A soma dessas duas matrizes será :");
 for (a = 0; a < 3; a++) {
        for (b = 0; b < 3; b++) {
            printf("%d\t", matriz3[a][b]);  
        }
        printf("\n");  
    }
    return 0;
}
