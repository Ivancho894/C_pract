#include <stdio.h>
int ingresoNum();
int multiploCheck(int num,int multi);


int multiploCheck(int num, int multip){
    
    if(num % multip == 0 ){
        return 1;

    }else{
        return 0;
    }
}



int ingresoNum(){
    int num;
    
    printf("Ingrese numero: ");
    scanf("%d",&num);
    
    return num;
}
int main(){
    int num;
    int cant = 0;
    for (int i = 0;i<10;i++){
        num = ingresoNum();
        cant += multiploCheck(num,5);
    }

    printf("Se ingresaron %d multiplos a 5", cant);
    return 0;
}