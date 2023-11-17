
//Hecho por Ivan Serralta
//Eje de recuperatorio turno noche

#include <stdio.h>
#include <stdlib.h>
#define N 3


int cargar(int* data){
    for (int i = 0; i<N;i++){
        printf("Ingrese un numero: ");
        scanf("%d",(data+i));
    }
}
int menCheck(int men, int num){
    if(men<num) return men;
    return num;
}
int printear(int *data){
    int men = *data;
    int num;
    int pares = 0;
    printf("Datos ingresados:\n");
    for(int j=0;j<N;j++){
        num = *(data+j);
        printf("%d \n",num);
        men = menCheck(men,num);
        if(num%2==0) pares++;
    }
    
    printf("%d es el menor y hay %d",men,pares);
}


int main() {
    
    int* data = (int*)malloc(N*sizeof(int));
    if (data==NULL) puts("Errooooooor");
    else {
        cargar(data);
        printear(data);
    }
    

    return 0;
}
