#include <stdio.h>

int main(){

    float num, soma, maior = 0, menor = 10, i = 0;
    
    while(1){
        if(scanf("%f", &num) != 1){
        break;
    }
        if(num < menor){
            menor = num;
    }   if (num > maior){
            maior = num;
    }
    i++;
    soma += num;
}

    float media;
    if (i != 0){
    media = soma/i;
} else {
    printf("Error!");
}
    printf("media: %.2f maior: %.2f menor: %.2f\n", media, maior, menor);
}