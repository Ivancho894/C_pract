#include <stdio.h>

int main (){
    int juan,maria,pj,pm,j;
    j = 0;
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
                j++;
            }
            if (maria==3){
                pj++;
                j++;
            }
        }else if (juan==2){
            if (maria==1){
                pj++;
                j++;
            }
            if (maria==3){
                pm++;
                j++;
            }
        }else{
            if (maria==1){
                pm++;
                j++;
            }
            if (maria==2){
                pj++;
                j++;
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