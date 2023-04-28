#include <stdio.h>


int main (){
    int num,i;
    printf("Ingrese numero a sacar factorial: ");
    scanf("%d",&num);
    printf("\nEs divisible por: ");
    for (i=2;i<num;i++){
        if (num%i==0){
            printf("\n%d",i);
        }
        }
        return 0;
    }