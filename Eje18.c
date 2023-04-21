#include <stdio.h>

int main()
{
    int a;
    int b;
    int c = 0;
    int i;
    printf("Ingrese el valor del numero a ser multiplicado");
    scanf("%d", &a);
    printf("Ingrese el producto");
    scanf("%d", &b);
    for (i = 0; i < b; i++)
    {
        c += a;
    }
    printf("%d multiplicado por %d es: %d",a ,b ,c,/n);
    return 0;
};
