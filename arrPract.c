#include <stdio.h>
int main(){
    int arrLength,num;
    num=-1;
    printf("Ingrese el tamano del array: ");
    scanf("%d",&arrLength);

    int arr[arrLength];
    for (int e = 0; e<=arrLength;e++){
        printf("Ingrese el valor de la posicion %d: ",e);
        scanf("%d",&arr[e]);
    }
    do{

        for (int j = 0;j<=arrLength;j++){
            printf(" %d",arr[j]);
            }

        printf("\n-Ingrese 0 para salir.\n");
        printf("-Ingrese 1 para sacar promedio.\n");
        printf("-Ingrese 2 para sacar mayor.\n");
        printf("-Ingrese 3 para sacar menor.\n");
        printf("-Ingrese 4 para sacar suma.\n");
        scanf("%d",&num);


        if (num == 1){
                   int sum = 0;
            for (int j = 0;j<=arrLength;j++){
                  sum+=arr[j];
                }
                int prom=sum/arrLength;
             printf("El promedio de todos los numeros es %d.\n",prom);
        }else if (num == 2){
                int may = arr[0];
            for (int j = 0;j<=arrLength;j++){
                if (arr[j]>may){
                    may = arr[j];
                }}
                printf("El mayor del array es: %d\n",may);
        }else if (num == 3){
            int men = arr[0];
            for (int j = 0;j<=arrLength;j++){
                if (arr[j]<men){
                    men = arr[j];
                }
            }        
            printf("El menor valor del array es: %d\n",men);
        }else if (num == 4){
            int sum = 0;
            for (int j = 0;j<=arrLength;j++){
                  sum+=arr[j];
                }
             printf("La suma de todos los numeros es %d.\n",sum);
        }

    }while (num!=0);
    prinf("Chau");
    return 0;

}