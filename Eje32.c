#include <stdio.h>
#include <stdlib.h>


int main(){
    int n[5];
    int i;

    int mayor=0;
    for (i=0;i<=4;i++){
        n[i]=rand();
        printf("%d\n",n[i]);
    }

    for (i=0;i<=4;i++){
    if (n[i]>mayor){
        mayor=n[i];
    }
    }
    printf("El valor mayor ingresado es %d\n",mayor);
    return 0;
}