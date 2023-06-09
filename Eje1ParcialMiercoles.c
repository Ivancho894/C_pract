#include <stdio.h>



int main(){
    int t=0;
    int K,N;
    char nada;
    printf("ingrese la cantidad de cuadros en la faja: ");
    scanf("%d",&K);
    printf("Ingrese la cantidad de colores: ");
    scanf("%d",&N);
    char colores[N];
    printf("Ingrese los colores:");
    for(int i = 0; i<N;i++){
        scanf("%c",&colores[i]);
        scanf("%c",&nada);
    }

    for (int j = 0; j < K; j++){    
        printf("  %c  ",&colores[t]);
        if (t==N){
            t=-1;
        }
        t++;
    }
    


}