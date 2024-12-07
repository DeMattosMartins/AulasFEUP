/*Escreva um programa com uma funcao que determina o capital acumulado (ca) ao fim de n anos. Para este
calculo, considere um capital inicial (ci) que é atualizado a uma taxa de juro anual constante (j). Os valores de
ci, j e o numero de anos sao especificados pelo utilizador (inputs). */

#include <stdio.h>
#include <math.h>

void capital(int capitalInicial, float juros, int anos){

//Calcula, seguindo a formula: Ca = Ci * (1 + j/100)^n, o capital final;
    float capitalFinal = capitalInicial * pow((1 + juros/100), anos);
//imprime o capital final;
    printf("Capital final: %.3f euros", capitalFinal);
}

int main(){

    float inicio, juros;
    int anos;
//solicita o capital inicial;
    printf("diga o capital incial: ");
    scanf("%f", &inicio);
//solicita o juros;
    printf("diga o juros: ");
    scanf("%f", &juros);
//solicita os anos;
    printf("diga os anos: ");
    scanf("%d", &anos);
//chama a função para calcular o capital final;
    capital(inicio, juros, anos);

}