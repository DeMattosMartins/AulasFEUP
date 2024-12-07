#include <stdio.h>

int main (){

    float res1, res2, serie, paralelo;
    
    printf("valor da resitencia 1: \n");
    scanf("%f", &res1);
    printf("valor da resitencia 2: \n");
    scanf("%f", &res2);

    serie = res1 + res2;
    paralelo = (res1 * res2) / (float)(res1 + res2);

    printf("Paralelo: %.4f, serie: %.4f", paralelo, serie);
}