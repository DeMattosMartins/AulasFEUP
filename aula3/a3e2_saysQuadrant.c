#include <stdio.h>

int main (){

    float x, y;

    printf("Enter the coordinate point:\n");
    printf("x: ");
    scanf("%f", &x);
    printf("y: ");
    scanf("%f", &y);
    
    if(x == 0 || y == 0){
        printf("Your coordinate is not included in a quadrant.\n");
    } else if(x > 0 && y > 0){
        printf("Your coordinate is in the fisrt quadrant.\n");
    } else if(x < 0 && y > 0){
        printf("Your coordinate is in the second quadrant.\n");
    } else if (x < 0 && y < 0){
        printf("Your coordinate is in the third quadrant.\n");
    } else {
        printf("Your coordinate is in the fourth quadrant.\n");
    }
        printf("x: %.1f y: %.f", x,y);
}