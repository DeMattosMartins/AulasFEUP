#include <stdio.h>
#include <string.h>

void intToRoman(int num) {
    int valor[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    char numeral[][2] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;
    char resultado[10];
    strcpy(resultado, "");

    while (num > 0) {
        while (num >= valor[i]) {
            strcat(resultado, numeral[i]);
            num -= valor[i];
        }
        i++;
    }

    printf("Numeracao romana: %s\n", resultado);
}

int main() {
    int numero;
    printf("Insira o numero: ");
    scanf("%d", &numero);
    intToRoman(numero);
    return 0;
}