#include<stdio.h>
#define T 100
int main(){
    int cantHijos[T];
    char area[T];
    int seguimos;
    int i = 0;
    char nada;
    int cant =0;

    for (int j = 0; j<=100;j++){
        cantHijos[j]=0;
    }
    printf("Bienvenidos\n");

    do
    {
        seguimos = -1;
        // Carga cantidad de hijos
        while (cantHijos[i]<=0)
        {
            printf("Ingrese la cantidad de hijos a cargar para el empleado cod %d: ",i+1);
            scanf("%d",&cantHijos[i]);
            scanf("%c",&nada);
        }
        
        //Carga Area
        
        while ((area[i]!= 'O') & (area[i] != 'A') & (area[i] != 'S'))
        {
            printf("Ingrese el area del empleado: ");
            area[i]=getchar();
            // scanf("%c",&area[i]);

            scanf("%c",&nada);
        }
        
        //Carga si quiere continuar
        
        while ((seguimos !=0) && (seguimos !=1))
        {
            printf("1 para seguir, 0 para cerrar: ");
            scanf("%d",&seguimos);
            scanf("%c",&nada);
        }
        i++;
    } while (seguimos==1);
    

    //muestro todos los empleados
    for (int r = 0; r < i; r++){
        if (cantHijos[r]==1){
            cant++;
        }
        printf("Empleado: %d, Area: %c, CantHijos: %d\n",r+1,area[r],cantHijos[r]);
    }


    

    //extra
    printf("Los empleado/s de area operativa son: \n");
    for (int r = 0; r < i; r++){
        if (area[r]=='O'){
            printf("Codigo: %d, Costo: $%d\n",r+1,cantHijos[r]*850);
        }
    
    }
    printf("Hay %d empleados con un solo hijo\n\n\n",cant);



}