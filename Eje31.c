#include <stdio.h>

int main(){
    int n,i;
    int mayor=0;

    for (i=0;i<=4;i++){
    printf("Ingrese n:");
    scanf("%d",&n);
    if (n>mayor){
        mayor=n;
    }
    }
    printf("El valor mayor ingresado es %d",mayor);
    return 0;
}