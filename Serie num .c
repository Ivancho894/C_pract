#include <stdio.h>

int printear(int num,int cant);

int ingresarDatos(int min,int max);



int main(){
    
    int num = ingresarDatos(1,999999999999);
    
    int cant = ingresarDatos(-99999999,99999999);

    int m = printear(num, cant);
}

int ingresarDatos(int min,int max){
    int num=0;
    do{
        printf("Ingrese un numero mayor a %d y menor a %d",max, min);
        scanf("%d",&num);
    }while(num>=min && num<=max && num!=0);
    return num;
}


int printear (int num, int cant){
    printf("Serie de dobles: ");
    for (int i = 1;i<=cant;i++){
        num*=num;
        printf("%d       ");
    }
}