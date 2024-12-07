#include <stdio.h>

/* Crie um programa que simule uma maquina de calcular que efetua as opera¸c˜oes aritm´eticas mais b´asicas: adição
(+), subtracão (−), multiplicação (∗), divisão (/) e módulo/resto da divisão inteira (%). */

int main (){

    char operacao;
    int num1, num2;

    //solicita operação;
    printf("Qual operação: ");
    scanf(" %c", &operacao);

    //solicita numeros;
    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    //seletor para realizar a conta;
    int conta = 0;
    if(operacao == '+'){
        conta = num1 + num2;
        printf("Valor da conta: %d", conta);
    } else if (operacao == '*' && num2 != 0){
        conta = num1 * num2;
        printf("Valor da conta: %d", conta);
    } else if (operacao == '-'){
        conta = num1 - num2;
        printf("Valor da conta: %d", conta);
    } else if (operacao == '/'){
        conta = num1 / num2;
        printf("Valor da conta: %d", conta);
    } else if (operacao == '%' && num2 != 0){
        conta = num1 % num2;
        printf("Valor da conta: %d", conta);
    } else {
        printf("Valor inserido não valido.");
    }
}