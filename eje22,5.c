#include <stdio.h>



int main (){
    int radio;
    float sup;
    printf("Ingrese el radio de la esfera calcular: ");
    scanf("%d",&radio);
    if (radio<0){
        printf("El radio es menor a 0\n");
        return 0;
    }else if (radio==0){
        printf("El radio es igual a 0\n");
        return 0;
    }
    sup = 4 * 3.14 * radio;
    printf("La superficie de una esfera de radio %d es: %f \n",radio,sup);
}   