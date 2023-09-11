//Hecho por Ivan Serralta
//Lab 5 

#include <stdio.h>

void convertir (int *horas, int *minutos, int *segundos){
    int enSegundos = *segundos;
    *segundos= enSegundos%60;
    *minutos= (enSegundos/60)%60;
    *horas = (enSegundos/60)/60;
    return 0;
    
}

int main() {
    
    int horas= 0,minutos= 0,segundos= 0;
    printf("Ingrese los segundos a convertir: ");
    scanf("%d",&segundos);
    convertir(&horas,&minutos,&segundos);
    
    printf("Horas: %d, Minutos: %d, Segundos: %d",horas,minutos,segundos);

    return 0;
}