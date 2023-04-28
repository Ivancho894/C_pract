#include <stdio.h>


int main (){
    int num,i;
    printf("Ingrese numero a sacar factorial: ");
    scanf("%d",&num);
    printf("\nEs divisible por: ");
    for (i=2;i<num;i++){
        if (i%num==0){
            printf("%d \n",i);
        }
        }
        return 0;
    }