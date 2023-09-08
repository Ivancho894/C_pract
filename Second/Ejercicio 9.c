//Ejercicio 9.
//Hecho por Ivan Serralta 25-08-23
#include <stdio.h>
#include <ctype.h>
#define tam 100

char cargarVec(char vec[]){
    printf("Ingrese la frase a trabajar: ");
    fgets(vec,tam,stdin);
    return vec;
}

int contar(char vec[]){
    char men = toupper(vec[0]);
    int cont = 0;
    char letra;

    for (int i = 1; tam>=i; i++){
        // if (vec[i]){
        //     printf("%c",vec[i]);
        // }
        letra=toupper(vec[0]);
        if (men == letra){
        
            cont++;
        }else if(men>letra){
            men = letra;
            cont = 1;
        }

    }
    printf("La menor letra es: %c y esta %d veces",men,cont);
    return 0;

}


int main(){
    char frase[tam]='.';
    cargarVec(frase);
    contar(frase);   
}