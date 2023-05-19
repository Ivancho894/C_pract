#include <stdio.h>

int main(){
    int cant;

    printf("Cuantos usuarios vas a cargar: ");
    scanf("%d",&cant);

    cant--;
    //Inicializo arrays
    char nombres[cant],signos[cant];
    
    //Lleno los arrays
    for(int i = 0; i<=cant;i++){
        printf("\nIngrese el nombre del usuario :");
        scanf("%s",&nombres[i]);
        printf("\nIngrese el signo de %s: ",nombres[i]);
        scanf("%s",&signos[i]);
    }
    for (int f = 0;f<=cant;f++){
        if (signos[f]=="ARIES"){
            printf("%s es Aries\n",&nombres[f]);
        }
    }
    //No lo termine, hay que usar una especie de matrices que no vimos

}