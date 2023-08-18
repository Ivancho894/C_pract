//Ejercicio 4 del lab 2.
//Hecho por Ivan Serralta 18-09-23


#include <stdio.h>
#define size 3 
#define multiploDe 3




int mostrar(int vec[]){
    printf("El arreglo quedo: \n");
    for(int j = 0; j < size; j++){
        printf("%d ",vec[j]);
    }
    printf("\n");
    return 0;
}

int mostrarPares(int vec[]){
    printf("Los pares del vector ingresado son : \n");
    for(int j = 0; j < size; j++){
        if (vec[j]%2==0)printf("%d ",vec[j]);
    }
    printf("\n");
    return 0;
}

int mostrarMinimo(int vec[]){
    int min = vec[0];
    for(int j = 0; j < size; j++){
        if (vec[j]<min)min=vec[j];
    }
    printf("El minimo es: %d",min);
    printf("\n");
    return 0;
}

int mostrarMaximo(int vec[]){
    int max = vec[0];
    for(int j = 0; j < size; j++){
        if (vec[j]>max)max=vec[j];
    }
    printf("El maximo es: %d",max);
    printf("\n");
    return 0;
}

int mostrarPromedio(int vec[]){
    int tot=0;
    for(int j = 0; j < size; j++){
        tot+=vec[j];
        }
    printf("El promedio es: %d",tot/size);
    printf("\n");
    return 0;
}

int verificarNoMultiploDe3(int m){
    return (m % multiploDe != 0);
}


int cargarVector(int vec[]){
    
    for (int i = 0; i < size;i++){
        do{
            printf("Ingrese un numero multiplo de %d para la pos %d: ",multiploDe,i+1);
            scanf("%d",&vec[i]);
    
        }while(verificarNoMultiploDe3(vec[i]));

    }
    return 0;
    
    }
int menu(vec){
    int op;
    do{
        printf("\n");
        printf("Menu:\n");
        printf("1. Mostrar todo el vector.\n");
        printf("2. Mostrar todo los numeros pares.\n");
        printf("3. Mostrar el promedio.\n");
        printf("4. Mostrar el minimo.\n");
        printf("5. Mostrar el maximo\n");
        printf("6. Volver a cargar\n");
        printf("0. SALIR\n");
        printf("Ingrese un numero del 0 al 6 :");
        scanf("%d",&op);
        printf("\n");
        switch (op){
        case 1:
            mostrar(vec);
            break;
        case 2:
            mostrarPares(vec);
            break;
        case 3:
            mostrarPromedio(vec);
            break;
        case 4:
            mostrarMinimo(vec);
            break;
        case 5:
            mostrarMaximo(vec);
            break;            
        case 6:
            cargarVector(vec);
            break;
        default:
            break;
        }

    }while(op!=0);        

    return 0;
}
int main(){
    
    int vec[size];
    cargarVector(vec);
    menu(vec);
    printf("CHAU");
    return 0;
    
}