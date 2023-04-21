#include <stdio.h>

int main(){
    int a,i;
    for (i = 0; i<5;i++){
    printf("Ingresa un nuemero: ");
    scanf("%d",&a);
    if (a%3!=0){
        printf("El numero %d es no multiplo de 3 \n",a);
    }else {
        printf("El numero %d es multiplo de 3\n",a);
    }
    }
    return 0;
}