#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void converteHoras(int TotalSegundos,int *Hora,int *Min,int *Seg){
	*Hora=TotalSegundos/3600;
	*Min=TotalSegundos/60;
	*Seg=*Min/60;
	
	
}
int main(){
	int TotalSegundos, *Hora,*Min, *Seg;
	printf("Total de segundos:\n");
	scanf("%d", &TotalSegundos);
	converteHoras(TotalSegundos,&Hora,&Min, &Seg);
	printf("[%d]:[%d]:[%d]", Hora,Min,Seg);
	return 0;
}
