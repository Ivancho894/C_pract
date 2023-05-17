#include <stdio.h>

int main(){
    int n,v,cont;
    cont = 0;
    for (v=0;v<=5;v++){
        printf("Ingrese n: ");
        scanf("%d",&n);
        if (n%3==0){
            cont++;
        }
    }
    printf("Ingresaste %d cantidad de multiplos de 3",cont);
    return 0;
}