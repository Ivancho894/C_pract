//Ejercicio 4 del lab 2.
//Hecho por Ivan Serralta 18-09-23
#include <stdio.h>
#define size 3
#define multiploDe 3


int main(){
    int vec[size];
    cargarVector(vec);
    mostrar(vec);

    

    
}

int mostrar(int vec[]){
    printf("El arreglo quedo: ")
    for(int j = 0; j < size; j++){
        printf("%d ",vec[j]);
    }
    printf("\n");
}

int verificarNoMultiploDe3(int m){
    return m % multiploDe != 0
}
int cargarVector(int vec[]){
    
    for (int i = 0; i < size;i++){
        do{
            printf("Ingrese un numero multiplo de 3");
            scanf("%d",&vec[i]);
    
        }while(verificarNoMultiploDe3(vec[i]));

    }
    
    }