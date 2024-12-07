#include <stdio.h>

int main (){

    float p1, p2, t1, t2, years = 0;
    /* always p1 > p2
    always agp1 < agp2 */

    printf("Population A: ");
        scanf("%f", &p1);
        
    printf("Growth rate A: ");
        scanf("%f", &t1);

    printf("Population B: ");
        scanf("%f", &p2);

    printf("Growth rate B: ");
        scanf("%f", &t2);

        if(p1 > p2 && t1 < t2){
            while(p1 > p2){
                p1 += p1*(t1/100);
                p2 += p2*(t2/100);
                years++;
            }
        }

    printf("Population of B will surpass A in %d years \n", (int)years);
}