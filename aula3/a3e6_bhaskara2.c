#include <stdio.h>
#include <math.h>

int main(){

    double x1, x2;
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    x1 = (-b + sqrt(b*b - 4*a*c))/2;
    x2 = (-b - sqrt(b*b - 4*a*c))/2;

    if((b*b - 4*a*c) < 0){
        printf("The equation %lfx²+(%lfx)+(%lf) does not have real solutions.", a, b, c);
    }else if(a == 0){
        printf("ERROR: a can not be 0");
    }else {
        printf("x1 = %lf, x2 = %lf.\n", x1, x2);
    }    
}