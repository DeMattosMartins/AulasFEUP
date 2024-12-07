/*Implemente uma fun¸c˜ao, com parˆametros a e x, para o c´alculo de f(x) = a*x^2
(par´abola). Utilize a fun¸c˜ao num
programa que apresenta os valores de f(x) para valores de x num determinado intervalo definido pelo utilizador.
O utilizador deve especificar os limites (inferior e superior) do intervalo, bem como o incremento a utilizar.*/

#include <stdio.h>
#include <math.h>

//calculo da funcao
float funcao(float a, float intervalo1, float intervalo2, float incremento){

    //repetição para o incremento
    while(intervalo1 <= intervalo2){
        //calculo da funcao
        float resultado = a*pow(intervalo1, 2); 
        printf("f(%.2f): %.2f \n", intervalo1, resultado);
        intervalo1 += incremento;
    }
    return 0;
}

int main(){

    float a, inter1, inter2, incre;

    //solicita o a;
        printf("diga o a: ");
        scanf("%f", &a);

    //solicita os intervalos
        printf("diga o intervalo inicial: ");
        scanf("%f", &inter1);
        printf("diga o intervalo final: ");
        scanf("%f", &inter2);

    //solicita o inrecemetno;
        printf("diga o incremento: ");
        scanf("%f", &incre);

    funcao(a, inter1, inter2, incre);
    }