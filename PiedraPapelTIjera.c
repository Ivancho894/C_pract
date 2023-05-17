#include <stdio.h>

int main (){
    int juan,maria,pj,pm;
    pm = 0;
    pj = 0;

    while (pm<3 && pj<3){
        printf("Maria va: %d Juan va: %d \n",pm,pj);
        printf("Ingrese lo Piedra(1), Papel(2) o Tijera(3) de Juan: ");
        scanf("%d",&juan);
        printf("Ingrese lo Piedra(1), Papel(2) o Tijera(3) de Maria: ");
        scanf("%d",&maria);
        
        if (juan==1){
            if (maria==2){
                pm++;
            }
            if (maria==3){
                pj++;
            }
        }else if (juan==2){
            if (maria==1){
                pj++;
            }
            if (maria==3){
                pm++;
            }
        }else{
            if (maria==1){
                pm++;
            }
            if (maria==2){
                pj++;
            }
            

        }

    }
    if (pm>pj){
        printf("Gano maria");
    }else {
        printf("Gano Juan");
    }
    return 0;
}