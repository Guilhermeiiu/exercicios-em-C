#include <stdlib.h>
#include <locale.h>
int compararMaior(int num1, int num2){
    if(num1>num2){
        return num1;
    }
    else if(num1<num2)
    {
        return num2;
    }
}
int compararMenor(int num1, int num2){
    if(num1<num2){
        return num1;
    }
    else if (num1>num2){
        return num2;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1,num2;
    printf("Escreva dois números:\n");
    scanf("%d %d",&num1, &num2);
    
    
    printf("O maior número é:%d\n", compararMaior(num1,num2));
     printf("O menor número é:%d\n", compararMenor(num1,num2));

} 