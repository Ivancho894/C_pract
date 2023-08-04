#include <stdio.h>
#define T 100


int main (){
    int cant[T];
    char area[T];
    int var=0;
    int unosolo=0;
    int num = 0;

    do{
        num++;
        printf("Ingrese la cantidad de hijos del empleado numero %d: ",num);
        scanf("%d",&cant[num-1]);
        getchar();

        printf("Ingrese el area del empleado numero %d: ",num);
        scanf("%c",&area[num-1]);
        getchar();

        printf("Ingrese 1 para continua o 0 para finalizar");
        scanf("%d",&var);

    }while(var==1);
    printf("nro   cant     area\n");
    for (int i = 0;num>i;i++){
        printf("%d   %d   %c \n",i+1,cant[i],area[i]);
        if (cant[i]==1){
            unosolo++;
        }
    
    }
    printf("Hay %d empleados con 1 solo hijo/a\n",unosolo);

}

