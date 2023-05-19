#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define TAM 4


int main(){
    char a;
    char elementos[4];

    for(int i=0; i<4;i++){
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
    return 0;
}
