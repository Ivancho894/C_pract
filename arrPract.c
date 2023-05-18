#include <stdio.h>
int main(){
    //Inicializo variables
    int arrLength,num;
    num=-1;

    do{
        printf("Ingrese el tamano del array: ");
        scanf("%d",&arrLength);
    }while(arrLength<=0);

    //Inicializo array
    arrLength--;
    int arr[arrLength];
    
    //Usuario llena el array
    for (int e = 0; e<=arrLength;e++){
        printf("Ingrese el valor de la posicion %d: ",e+1);
        scanf("%d",&arr[e]);
    }
    do{
        //Printea el menu
        printf("El array es:");
        for (int j = 0;j<=arrLength;j++){
            printf(" %d",arr[j]);
            }

        //Menu de opciones
        printf("\n-Ingrese 0 para salir.\n");
        printf("-Ingrese 1 para sacar promedio.\n");
        printf("-Ingrese 2 para sacar mayor.\n");
        printf("-Ingrese 3 para sacar menor.\n");
        printf("-Ingrese 4 para sacar suma.\n");
        printf("-Ingrese 5 para crear nuevo array.\n");
        scanf("%d",&num);

        //Usuario selecciono 1
        if (num == 1){
            int sum = 0;
            for (int j = 0;j<=arrLength;j++){
                sum+=arr[j];
            }
            int prom=sum/(arrLength+1);
            printf("El promedio de todos los numeros es %d.\n",prom);


        //Usuario selecciono 2
        }else if (num == 2){
            int may = arr[0];
            for (int j = 0;j<=arrLength;j++){
                if (arr[j]>may){
                    may = arr[j];
                }
            }
            printf("El mayor del array es: %d\n",may);


        //Usuario selecciono 3
        }else if (num == 3){
            int men = arr[0];
            for (int j = 0;j<=arrLength;j++){
                if (arr[j]<men){
                    men = arr[j];
                }
            }        
            printf("El menor valor del array es: %d\n",men);


        //Usuario selecciono 4
        }else if (num == 4){
            int sum = 0;
            for (int j = 0;j<=arrLength;j++){
                  sum+=arr[j];
            }
            printf("La suma de todos los numeros es %d.\n",sum);


        //Usuario selecciono 5
        }else if (num==5){
            
            do{
                printf("Ingrese el tamano del array: ");
                scanf("%d",&arrLength);
            }while(arrLength<=0);
            
            //Inicializo array
            arrLength--;
            arr[arrLength];
            
            //Usuario llena el array
            for (int e = 0; e<=arrLength;e++){
                printf("Ingrese el valor de la posicion %d: ",e+1);
                scanf("%d",&arr[e]);
            }
        }
        

    }while (num!=0);
    printf("Chau\n");
    return 0;

}