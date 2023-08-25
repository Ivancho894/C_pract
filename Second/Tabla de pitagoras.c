#include <stdio.h>


int defTam(){
    int tam = 0;
    while (tam<=0 || tam > 12){
    printf("Ingrese el tamano de la tabla de pitagoras (entre 1 y 12): ");
    scanf("%d",&tam);
    }
    return tam;
}

void calcular(int tam){
    
    int matriz[tam][tam];
    for (int p = 0; p<tam; p++){
        for (int m = 0;m<tam;m++){
            matriz[p][m]=(p+1)*(m+1);
        }
    }

    for (int i = 0;i<tam;i++){
        printf("\n");
        for (int j = 0;j<tam;j++){
            printf("%3d\t",matriz[i][j]);
        }
    }
    return ;
}
    

int main(){
    int tam = defTam();
    
    calcular(tam);

}       