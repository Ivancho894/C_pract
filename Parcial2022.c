#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    char nada;
    int m=0;
    int deudas[100];
    char cuotas[100];
    int j=-1;
    int i = 0;

    for (int f = 0; f<100; f++){
        deudas[f]=0;
    }
    do{

        //Escaneo deuda
        while (deudas[i]<=0){
        printf("Ingrese el valor de las deuda del cliente numero %d: ",i+1);
        scanf("%d",&deudas[i]);
        scanf("%c",&nada);
        }

        //Escaneo Plan
        while (cuotas[i]!= 'B' && cuotas[i]!= 'P' && cuotas[i]!= 'S'){

        printf("Ingrese el plan de financiacion del cliente numero %d: ",i+1);
        scanf("%c",&cuotas[i]);
        scanf("%c",&nada);

        }

        printf("Ingrese 1 para continuar y 0 para finalizar la carga: ");
        scanf("%d",&j);
        scanf("%c",&nada);
        
        i++;
    }while (j==1);
    
    printf("\n\nEstos son los datos de los clientes cargados: \n");
    printf("Clente nro | Deuda | plan de financiacion\n");
    for (int k = 0; k<= i ;k++){
        printf("    %d      |  %d  |      %c\n",k+1,deudas[m],cuotas[m]);
    }
    

}