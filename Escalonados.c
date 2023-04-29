#include <stdio.h>

int main (){
    int a,b,num,cont;
    cont=0;
    printf("Ingrese el valor del numero: ");
    scanf("%d",&num);
    a=num/10;
    b=num%10;
    if (a<b){
        cont+=b-a;
    }
    a--;
    while (a!=0){
        cont+=9-a;
        a--;
    }
    printf("Hay %d numeros escalonados antes de %d",cont,num);
    return 0;

}