#include <stdio.h>


int defTam(){
    int tam = 0;
    while (tam<=0 || tam > 12){
    printf("Ingrese el tamano de la tabla de pitagoras (entre 1 y 12): ");
    scanf("%d",tam);
    }
    return tam;
}

int calcular(int tam){
    int matriz[tam][tam];
    for (int p = 0; p<=tam; p++){
        for (int m = 0;m<=tam;m++){
            matriz[p][m]=p*m;
        }
    }
    return matriz;
}
int mostrar(int matriz[][],int tam){    
    for (int i = 1;i<=tam;i++){
        printf("\n");
        for (int j = 1;j<=tam;j++){
            printf("%d   ",matriz[i][j]);
        }
    }
    return 0;
}
    

int main(){
    int tam = defTam();
    
    mostrar(calcular(tam),tam);

}      