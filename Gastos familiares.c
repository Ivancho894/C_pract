#include <stdio.h>
#define TAM 2

int printear(double montos,char tipo);

int main(){
    int total = 0;
    double montos[TAM];
    char tipo[TAM];

    for (int i = 0; i<TAM;i++){
        do{
            printf("Ingrese la tipo de la carga numero %d: ",i+1);
            scanf("%c",&tipo[i]);
            getchar();
            }while(tipo[i]!='E' && tipo[i]!='D' && tipo[i]!='C');
        printf("Ingrese el monto de la carga numero %d: ",i+1);
        scanf("%lf",&montos[i]);
        total+=montos[i];
        printf("*****************************************************************\n");
    }

    printf("El total de la familia es: %d",total);

    printf("\nListado Efectivo: \n");
    int m = printear(montos,tipo,"E");
    printf("\nListado Credito: \n");
    int m = printear(montos,tipo,"C");
    printf("\nListado Debito: \n");



}


int printear(double montos[], char tipo[],char elTipo){
    int total = 0;        
    for (int p = 0; p<TAM;p++){
        if (montos[p]==elTipo ){
        printf("%.2lf\n",montos[p]);
        total+=tipo[p];
        }
    }   
    printf("El total es: %d",total);


    printf("\nListado Credito: \n");
    for (int o = 0; o<TAM;o++){
        if (montos[o]=='C'){
        printf("%.2lf\n",montos[o]);
        total+=tipo[o];

        }
    }    printf("El total en credito es: %d",total);
    total = 0;

    printf("\nListado Debito: \n");
    for (int u = 0; u<TAM;u++){
        if (tipo[u]=='D'){
        total+=montos[u];
        printf("%.2lf\n",montos[u]);
        }
    } 
    printf("El total en debito es: %d",total);
    total = 0;

    printf("\n");
    return 0