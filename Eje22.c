#include <stdio.h>

int main(){
<<<<<<< HEAD
    int a,i,cont;
=======
    int a,i;
    int cont = 0;
>>>>>>> c581ec946cff4882689fafa0c3c292dbda206240
    for (i = 0; i<5;i++){
    printf("Ingresa un nuemero: ");
    scanf("%d",&a);
    if (a%3!=0){
        printf("El numero %d es no multiplo de 3 \n",a); nn
    }else {
<<<<<<< HEAD
        cont++;
=======
        cont ++;
>>>>>>> c581ec946cff4882689fafa0c3c292dbda206240
    }
    }
        printf("La cantidad de numeros  que son multiplo de 3 son %d\n",cont);
    return 0;
}