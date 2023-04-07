#include <stdio.h>


int main(){
    int cantTrabajadas;
    printf("Ingrese horas trabajadas: ");
    scanf("%d",&cantTrabajadas);
    int sueldo = cantTrabajadas*210;
    if (sueldo > 2500){
        sueldo -= sueldo*0.35;
    }else{
        sueldo -= 85;
    }

        printf("El sueldo menos el seguro es %d");
}