#include <stdio.h>


int main(){
    int a;
    int b;
    int c;
    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);
    printf("Ingrese el tercer numero: ");
    scanf("%d",&c);
    int d = a+b+c;
    printf("El resultado es: %d",d);
}