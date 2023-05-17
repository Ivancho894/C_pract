#include <stdio.h>

int main(){
    int n;
    int m;
    int result=0;
    printf("Ingrese n:");
    scanf("%d",&n);
    m=n;
    while (n>0){
        result+=n;
        n--;
    }
    printf("El valor de todos los numeros anteriores a %d sumados es: %d\n",m,result);
    return 0;

}