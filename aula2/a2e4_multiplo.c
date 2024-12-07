#include <stdio.h>

int main(){

    int number1, number2;

    scanf("%d %d", &number1, &number2);

    if (number1 % number2 != 0){
        printf("Number %d is not multiple of the number %d \n", number1, number2);
    }   else {
        printf("Number %d is multiple of the number %d \n", number1, number2);
    }
}