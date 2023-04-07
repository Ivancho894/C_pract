#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Ingresa el valor de la base: ");
    scanf("%d", &a);
    printf("Ingresa el valor de la altura: ");
    scanf("%d", &b);

    if (a > 0 && b > 0)
    {
        int c = a * b;
        printf("La superficie del triangulo es: %d", c, "\n");
    }
}