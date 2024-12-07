#include <stdio.h>
#include <math.h>

int main(){

    int x1, x2;
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    x1 = (-b + sqrt(b*b - 4*a*c))/2;
    x2 = (-b - sqrt(b*b - 4*a*c))/2;

    printf("x1 = %d, x2 = %d.\n", x1, x2);
}