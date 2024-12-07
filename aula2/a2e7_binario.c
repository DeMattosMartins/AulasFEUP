#include <stdio.h>
#include <math.h>

int main(){

    int b1, b2, b3, b4, decimal, hexadecimal, octal;

    scanf("%d %d %d %d", &b1, &b2, &b3, &b4);

    decimal = b1*8 + b2*4 + b3*2 + b4*1;
    octal = decimal;
    hexadecimal = decimal;

    printf("O valor na base decimal: %d\n", decimal);
    printf("O valor na base octal: %o\n", octal);
    printf("O valor na base hexadecimal: %X\n", hexadecimal);
}