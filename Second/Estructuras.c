#include <stdio.h>
#define MAX 50

typedef struct
{
    char nombre[MAX];
    char apellido[MAX];
    int edad;
    int peso;
}persona;

int main (){
    persona uno = {"Ivan","Serralta",23,68};

    printf("%s %s tiene: %d y pesa: %d",uno.nombre,uno.apellido,uno.edad,uno.peso);
    return 0;
}
