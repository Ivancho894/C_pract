#include <stdio.h>

int main(){
    int radio;
    float sup;
    printf("Ingrese radio para calcular esfera");
    scanf("%d",&radio);
    if (radio>0){
        sup = 4 * 3.14 * radio * radio;
        printf("La superficie de una esfera de %d de radio es: %f",radio, sup);
    } else if (radio == 0){
        printf("El radio ingresado es 0");
    }else {
        printf("El radio ingresado es menor a 0");
    }
    return 0;
}