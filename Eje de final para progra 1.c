#include <stdio.h>


int main(){
    int seguimos = 1;

    while (seguimos == 1)
    {    
        int num=0;
        while (num<=0 || num >= 12){
            printf("Ingrese el numero maximo de multipliacion entre 1 y 12: ");
            scanf("%d",&num);
        }

        for (int i = 1;i<=num;i++){
            for (int j = 1;j<=num;j++){
                printf("%d     ",j*i);
            }
            printf("\n");

        }
        do{
            printf("Queres haceer otra tabla 1 o 0: ");
            scanf("%d",&seguimos);
        }while(seguimos != 0 && seguimos != 1);
    }
}      