#include <stdio.h>

int main (){

    double number, intNumber, decNumber;

    printf("Say a number: \n");
    scanf("%lf", &number);

    
    intNumber = (int)number; 
    decNumber = number - intNumber;

    printf("Number with only 3 decimals places: %0.3f, entire part: %.0f, decimal part: %lf", number, intNumber, decNumber);
}