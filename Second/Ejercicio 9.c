//Ejercicio 9.
//Hecho por Ivan Serralta 25-08-23
#include <stdio.h>
#define tam 100

char cargarVec(char vec[]){
    // int j = 0;
    // do{
        printf("Ingrese la frase a trabajar: ");
        scanf("%s",&vec[]);
    // }while(vec[j]!='*');
    return vec[];
}

int contar(char vec[]){
    char men = vec[0].toUpperCase;
    int cant = 0;

    for (int i = 1; tam>=i; i++){
        letra=vec[i].toUpperCase;
        if (men == letra){
            cont++;
        }else if(men>letra){
            men = letra;
            cont = 1;
        }

    }
    prinf("La menor letra es: %s y esta %d veces",men,cont);
    return 0;

}


int main(){
    char frase[tam];
    cargarVec(vec);
    contar(vec);   
}