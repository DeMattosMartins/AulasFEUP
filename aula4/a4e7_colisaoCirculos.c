#include <stdio.h>
#include <math.h>

//verifica a distancia entre os pontos
float distancia(float x1, float x2, float y1, float y2){

    //calcula a distancia;
    float resultado = sqrt(pow((x1 - x2), 2) + pow((y1 -y2), 2));
    return resultado;
}

//verifica se ha colisão entre os pontos;
void colisao(float distancia, float raio1, int raio2){

    //seleçao para imprimir se ha colisão ou não;
    if(distancia < (raio1 + raio2))
        printf("Estao em colisao! \n");
        else 
            printf("Não estão em colisão! \n");
    
}

int main (){

    float x1, x2, y1, y2, raio1, raio2;

    // solicita pontos;
    printf("Diga o x, y, e o raio do circulo A (separados por um espaco (" "): ");
    scanf("%f %f %f", &x1, &y1, &raio1);

    printf("Diga o x, y e o raio do circulo B (separados por um espaco (" "): ");
    scanf("%f %f %f", &x2, &y2, &raio2);

    //atribiur a distancia entre os pontos a resultado e, em seguida, chama a funcao colisao;
    int resultado = distancia(x1, x2, y1, y2);
    colisao(resultado, raio1, raio2);
}