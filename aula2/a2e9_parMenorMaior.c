#include <stdio.h>

int main (){

    float numero; 
    int arredondo, parProx1, parProx2;
    
    scanf("%f", &numero);

    if (numero - (int)numero < 0.5){
        arredondo = (int)numero;
    } if (numero - (int)numero >= 0.5){
        arredondo = (int)numero + 1;
    }

    if (arredondo % 2 == 0){
        parProx1 = arredondo + 2;
        parProx2 = arredondo -2;
    }
    if(arredondo % 2 != 0){
        parProx1 = arredondo + 1;
        parProx2 = arredondo - 1;
    }

    printf("%d %d", parProx1, parProx2);
}