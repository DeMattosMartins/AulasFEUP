#include <stdio.h>

int main (){

    float pi = 3.1416, radius, area, circumference;

    printf("Introduce the radius: \n");
    scanf("%f", &radius);
    
    area = pi*radius*radius;
    circumference = 2*pi*radius;

    printf("area: %f, circumference: %f", area, circumference);

}