#include <stdio.h>

int main (){

    int number, digit1, digit2;

    printf("Introduce a 3 digit number: \n");
    scanf("%d", &number);

    digit1 = number % 10;
    printf("Last digit: %d \n", digit1);
    digit2 = number/100;
    printf("first digit: %d \n", digit2);

    if(digit1 == digit2){
        printf("It's a capicua number \n");
    } else {
        printf("It's not a capicua number \n");
    }
    
}