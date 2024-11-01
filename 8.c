#include <stdio.h>

void converteHoras(int TotalSegundos, int *Hora, int *Min, int *Seg) {
    *Hora = TotalSegundos / 3600;
    *Min = (TotalSegundos % 3600) / 60; // Calcula os minutos restantes após as horas
    *Seg = TotalSegundos % 60;          // Calcula os segundos restantes
}

int main() {
    int TotalSegundos, Hora, Min, Seg;
    printf("Total de segundos:\n");
    scanf("%d", &TotalSegundos);
    converteHoras(TotalSegundos, &Hora, &Min, &Seg);
    printf("[%d]:[%d]:[%d]\n", Hora, Min, Seg);
    return 0;
}
