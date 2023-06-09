#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    char aCargar[10];
    // int aCargarNum[10];
    char nada;
    int cont = 0;
    // int m=0;
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
        // gets(aCargarNum);
        // deudas[i]=aCargarNum[0];
        scanf("%d",&deudas[i]);
        scanf("%c",&nada);
        }

        //Escaneo Plan
        while (cuotas[i]!= 'B' && cuotas[i]!= 'P' && cuotas[i]!= 'S'){

        printf("Ingrese el plan de financiacion del cliente numero %d: ",i+1);
        gets(aCargar);
        cuotas[i]=aCargar[0];
        // scanf("%c",&cuotas[i]);
        // scanf("%c",&nada);

        }

        printf("Ingrese 1 para continuar y 0 para finalizar la carga: ");
        // gets(aCargarNum);
        // j=aCargarNum[0];
        scanf("%d",&j);
        scanf("%c",&nada);
        
        i=i+1;
    }while (j==1);
    
    printf("\n\nEstos son los datos de los clientes cargados: \n");
    printf("Clente nro | Deuda | plan de financiacion\n");
    for (int k = 0; k< i ;k++){
        printf("    %d      |  %c    |      %d\n",k+1,cuotas[k],deudas[k]);
        if (deudas[k]>= 10000){
            cont++;
        }
    }
    printf("\n\nLa cantidad de deudores que poseen una deuda mayor a 10000 es: %d.\n\n\n",cont);
    
    printf("Los siguentes clientes accediron al plan social:\n\n");
    printf("Clente nro | Cuota\n");
    
    for (int o = 0; o < i; o++){

        if (cuotas[o] == 'S'){
            printf("%d       |   %d\n",o+1,deudas[o]/24);
        }
    }

}