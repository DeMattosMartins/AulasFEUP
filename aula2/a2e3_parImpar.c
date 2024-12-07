#include <stdio.h>

int main(){

    int number;
    
    printf("Introduce a number: \n");
    if (scanf("%d", &number) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    if (number %  2 == 0){
        printf("This number is Par \n");
    } 
    
    if (number % 2 == 1) {
        printf("This number is Impar\n");
    } 
}