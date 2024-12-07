#include <stdio.h>

int main(){

    float celsius, fahrenheit, kelvin;

    printf("Introduce Celsius:\n");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;
    fahrenheit = celsius * 9/5 + 32;

    printf("Celsius: %.2f, Kelvin: %.2f, fahrenheit: %.2f \n", celsius, kelvin, fahrenheit);
}