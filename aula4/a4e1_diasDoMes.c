#include <stdio.h>

/* Escreva um programa que leia uma data composta pelo mˆes e o ano de acordo com o Calend´ario Gregoriano.
Como sa´ıda, indique o n´umero de dias desse mˆes (28, 29, 30 ou 31 dias), tendo aten¸c˜ao aos anos bissextos.*/


void calculaDia(int mes, int ano){

    //meses com 31 dias;
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        printf("Esse mês tem 31 dias.");
    } 

    //meses com 30 dias;
    else if ( mes == 4 || mes == 6 || mes == 9 || mes == 11){
        printf("Esse mês tem 30 dias");
    } 

    //mes que pode ser 28 || 29 dias;
    else if(mes == 2){
        if (ano%4 == 0 || ano%400 == 0 ){
            printf("Esse mes tem 29 dias.");
        } else {
            printf("Esse mes tem 28 dias.");
        }

    // codigo de erro;
    } else {
        printf("Valor inserido para mês não é valido.");
    }
}

int main(){

    int mes, ano;

//solicita o mes;
    printf("Diga o mês: ");
    scanf("%d", &mes);
//solicita o ano;
    printf("Diga o ano: ");
    scanf("%d", &ano);
//chama a função para calcular os dias;
    calculaDia(mes, ano);
}