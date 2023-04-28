#include <stdio.h>

int main(){
    int a,i,cont;
    for (i = 0; i<5;i++){
    printf("Ingresa un nuemero: ");
    scanf("%d",&a);
    if (a%3!=0){
        printf("El numero %d es no multiplo de 3 \n",a);
    }else {
        cont++;
    }
    }
        printf("La cantidad de numeros  que son multiplo de 3 son %d\n",cont);
    return 0;
}