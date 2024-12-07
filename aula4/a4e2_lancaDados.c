/*Escreva um programa que simula n lan¸camentos de um dado de seis lados, com n definido pelo utilizador,
apresentando ao final quantas vezes saiu a face 4.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lancaDados(int numero){

    int vezes = 0;
    srand(time(NULL));

//repetição para os lançamentos;
    for(int i = 0; i < numero; i++){

    //função rand para definir qual numero do dado caiu;
            int face = rand() % 6 + 1;
            printf("numero %d \n", face);
    
    // verifica se o numero foi 4;
        if(face == 4){
            vezes++;
        }
    }
    // imprime quantas vezes o numero 4 caiu;
    printf("numero de vezes em que o numero 4 caiu: %d \n", vezes);

}

int main (){

    int numero;
//solicita o numero de lançamentos para o usuario;
    printf("Diga um número de lançamentos de dados: ");
    scanf("%d", &numero);
//chama a função e atribuiu o numero informado pelo usuario;
    lancaDados(numero);
}
