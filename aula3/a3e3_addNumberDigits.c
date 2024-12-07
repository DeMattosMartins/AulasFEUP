#include <stdio.h>

int main(){

    int number, num2, divisor, sum = 0;

    printf("Enter a natural number: \n");
    scanf("%d", &number);

    num2 = number;
    while(num2 > 0){

        divisor = num2 % 10;
        printf("valor: %d \n", divisor);

        sum += divisor;
        printf("sum: %d \n", sum);

        num2 /= 10;
    }

    printf("The addition of the digits of the number %d is: %d \n", number, sum);
}