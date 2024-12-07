#include <stdio.h>

    int *vmaior(int *valor, int *valor2){

        printf("Endereço das variaveis: %p %p \n", &valor, &valor2);

        if(*valor > *valor2){
            printf("valor maior: %d \n", *valor);
            printf("Endereço do maior: %p \n", &valor);
            return valor;
        }
        else{
            printf("valor maior: %d \n", *valor2);
            printf("Endereço do maior: %p \n", &valor2);
            return valor2;
        }
    }
    int main(){

        int a, b;

        printf("Insira dois valores: ");
        scanf("%d %d", &a, &b);

        vmaior(&a, &b);
}