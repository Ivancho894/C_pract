#include <stdio.h>
#define TAM 3
int main(){
    double montos[TAM];
    char sucu[TAM],nada;

    for (int i = 0; i<TAM;i++){
        printf("Ingrese el monto de la carga numero %d: ",i+1);
        scanf("%lf",&montos[i]);
        getchar();
        printf("Ingrese la sucursal de la carga numero %d: ",i+1);
        scanf("%c",&sucu[i]);
        getchar();
        printf("*****************************************************************\n");

    }   

    printf("Listado general: \n");
    for (int j = 0; j<TAM;j++){
        printf("%c  %.2lf\n",sucu[j],montos[j]);
    }


    printf("\nListado Escobar: \n");
    for (int p = 0; p<TAM;p++){
        if (sucu[p]=='E' || sucu[p]=='e'){
        printf("%.2lf\n",montos[p]);
        }
    }   
    printf("\nListado Pilar: \n");
    for (int o = 0; o<TAM;o++){
        if (sucu[o]=='P' || sucu[o]=='p'){
        printf("%.2lf\n",montos[o]);
        }
    } 
    printf("\n");

}