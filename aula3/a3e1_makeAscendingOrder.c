#include <stdio.h>

int main(){

    int num1, num2, num3, aux;

    printf("Say 3 numbers:\n");
    printf("Number 1:\n");
    scanf("%d", &num1);
    printf("Number 2:\n");
    scanf("%d", &num2);
    printf("Number 3:\n");
    scanf("%d", &num3);

    if(num1 > num2){
        aux = num1;
        num1 = num2;
        num2 = aux;
    } if(num1 > num3){
        aux = num1;
        num1 = num3;
        num3 = aux;
    } if(num2 > num3){
        aux = num2;
        num2 = num3;
        num3 = aux;
}

    printf("%d %d %d\n", num1, num2, num3);
}