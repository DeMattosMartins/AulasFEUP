/*Escreva um programa que calcule o peso ideal de uma pessoa (em quilos) sabendo que para homens, pesoideal =
72.7×altura−58, e para mulheres, pesoideal = 62.1×altura–44.7. O c´alculo dever´a ser feito por uma fun¸c˜ao,
que recebe como argumentos a altura (em metros) e o sexo da pessoa. */

#include <stdio.h>

//funcão para calcular o peso ideial;
void pesoIdeal(char sexo, float altura){

    //seleção: verifica se é f(feminino) ou m(masculino) e realiza a conta;
        float resultado;
        if(sexo == 'm' || sexo == 'M' )
            resultado = 72.7 * altura - 58;
        else 
            resultado = 62.1 * altura - 44.7;
    //imprime o resultado;
        printf("O seu peso ideial é: %.2f KG \n", resultado);

}

int main(){

    char sexo;
    float altura;
    
    //solicita o sexo do usuario;
        printf("Qual o seu sexo? (feminino = f, masculino = m): ");
        scanf("%c", &sexo);
    //solicita a altura do usuario;
        printf("Qual a sua altura? ");
        scanf("%f", &altura);
    //chama a função para calcular o peso ideal;
        pesoIdeal(sexo, altura);

}