/*Implemente uma fun¸c˜ao distancia que calcule a distˆancia entre dois pontos (x1, y1) e (x2, y2). Todos os parˆametros
de entrada e retorno devem ser n´umeros reais.
Utilize a f´ormula para c´alculo da distˆancia Euclidiana: dist = sqrt((X1 - X2)² + (Y1 - Y2)²) */

#include <stdio.h>
#include <math.h>

//calcula a distancia entre dois pontos;
float distancia(float x1, float x2, float y1, float y2){
    
    //funcao para calcular o ponto;
    float resultado = sqrt(pow((x1 - x2), 2) + pow((y1 -y2), 2));
    return resultado;
}

int main(){

    float x1, x2, y1, y2;

    // solicita pontos;
    printf("Diga o x1(ponto a): ");
    scanf("%f", &x1);

    printf("Diga o y1(ponto a): ");
    scanf("%f", &y1);

    printf("Diga o x2(ponto b): ");
    scanf("%f", &x2);

    printf("Diga o y2(ponto b): ");
    scanf("%f", &y2);

    //chama a funca para calcular os pontos;
    float conta = distancia(x1, x2, y1, y2);

    //imprime o resultado da distancia;
    printf("A distancia entre os pontos é: %.3f \n", conta);

}