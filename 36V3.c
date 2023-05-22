#include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
#include <string.h>
#define T 4 


int main(){
    char a;
    char elementos[T];
    char letra[2];

    for(int i=0; i<T;i++){
        printf("Ingrese una letra:");
        gets(letra);
        elementos[i]=letra[0];
        
    }

    
    for(int j = 0; j<T-1 ;j++){
        printf("%c, ",elementos[j]);
    }
    printf("%c.\n",elementos[T-1]);
    return 0;
}
