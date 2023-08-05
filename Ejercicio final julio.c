#include <stdio.h>
#define TAM 3
int main(){
    int montos[TAM];
    char sucu[TAM],nada;

    for (int i = 0; i<TAM;i++){
        printf("Ingrese el monto de la carga numero %d: ",i+1);
        scanf("%d",&montos[i]);
        getchar();
        printf("Ingrese la sucursal de la carga numero %d: ",i+1);
        scanf("%c",&sucu[i]);
        getchar();
        printf("*****************************************************************\n");

    }   

    printf("Listado general: \n");
    for (int j = 0; j<TAM;j++){
        printf("%c  %d\n",sucu[j],montos[j]);
    }


    printf("\nListado Escobar: \n");
    for (int p = 0; p<TAM;p++){
        if (sucu[p]=='E' || sucu[p]=='e'){
        printf("%d\n",montos[p]);
        }
    }   
    printf("\nListado Pilar: \n");
    for (int o = 0; o<TAM;o++){
        if (sucu[o]=='P' || sucu[o]=='p'){
        printf("%d\n",montos[o]);
        }
    } 
    printf("\n") 

}