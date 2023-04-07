#include <stdio.h>


//Ingrese 3 numeros por teclado y printear el mayor

int main(){
    int a;
    int b;
    int c;
    printf("Ingrese el primer numero: ");
    scanf("%d",&a)
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);
    printf("Ingrese el tercer numero: ");
    scanf("%d",&c);
    if (a>b && a>c){
        printf("El numero mayor es: %d",a);
    }else if(b>c){
        printf("El numero mayor es: %d",b);
    }else {
        printf("El numero mayor es: %d",c);

    }
    
}