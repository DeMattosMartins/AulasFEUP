#include <stdio.h>

int main (){

    int num;

    printf("High: ");
    scanf("%d", &num);

    int large = num;
    int large1 = num;
    
    //rpetição para as colunas;
    for(int i = 1; i < num; i++){

        //repetição para as linhas;
        for(int a = 0; a <= num + num; a++)
            
            if(a < large - 1){
                printf("_");
            } else if(a >= large && a <= large1){
                printf("*");
            } 
            printf("\n");
            large1++;
            large--;
    }
    //repetição para a base;
    int large2 = num;
    for(int b = 1; b <= large2; b++){
        if(b < large2){
            printf("_");
        } else if(b == large2){
            printf("*");
        }
    }
    printf("\n");
}