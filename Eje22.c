#include <stdio.h>

int main(){
    int a,i;
    int cont = 0;
    for (i = 0; i<5;i++){
    printf("Ingresa un nuemero: ");
    scanf("%d",&a);
    if (a%3!=0){
        printf("El numero %d es no multiplo de 3 \n",a); nn
    }else {
        cont ++;
    }
    }
    return 0;
}