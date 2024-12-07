#include <stdio.h>

int main (){

    int number, x1 = -10, x2 = 5, x3 = 45, x4 = 120, x5 = 245;

    // gap1 == ]infinite, -10[
    // gap2 == [5,45[
    // gap3 == ]120, 245]

    printf("Introduce a number: ");
    scanf("%d", &number);

    if(number < -10){
        printf("Your number is in the first interval: ]infinite, -10[. \n");
    } else if (number >= 5 && number < 45){
        printf("Your number is in the second interval: [5,45[. \n");
    } else if (number > 120 && number <= 245){
        printf("Your number is in the third interval: ]120, 245]. \n");
    } else {
        printf("Your number is not include in a interval. \n");
    }

}