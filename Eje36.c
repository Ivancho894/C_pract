#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include <string.h>
#define T 4 


int main(){
    char a;
    char elementos[T];

    for(int i=0; i<T;i++){
        fflush(stdin);
        printf("Ingrese una letra:");
        elementos[i] = getchar();
        a = getchar();
        //scanf("%c",&elementos[i]);
    }

    printf("Los caracteres ingresados son: %c",elementos[0]);
    for(int j = 1; j<4 ;j++){
        putchar(elementos[j]);
        //printf("%c",elementos[j]);
    }
    printf("%c.\n",elementos[T]);
    return 0;
}
