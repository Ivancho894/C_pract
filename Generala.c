#include <stdio.h>


int main (){
    int a,b,c,d,e;
    printf("Ingrese los valores del los dados: ");
    printf("A: ");
    scanf("%d",&a);
    printf("B: ");
    scanf("%d",&b);
    printf("C: ");    
    scanf("%d",&c);
    printf("D: ");    
    scanf("%d",&d);
    printf("E: ");    
    scanf("%d",&e);    
    if (a==e){
        printf("Generala!!!");
    } else if (a==b && c==e || a==c && d==e){
        printf("Poker!");
    }else if (a==d || b==e){
        printf("FULLLLL");
    } else {
        printf("No sacaste nada!");
    }
    return 0;
}