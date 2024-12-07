#include <stdio.h>

int main(){

    int num1, num2, aux;

    printf("numero 1: \n");
    scanf("%d", &num1);

    printf("numero 2: \n");
    scanf("%d", &num2);

    aux = num1;
    num1 = num2;
    num2 = aux;

    printf("Numero 1: %d, numero 2: %d \n", num1, num2);
}