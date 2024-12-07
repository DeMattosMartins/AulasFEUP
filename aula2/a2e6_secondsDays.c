#include <stdio.h>

int main (){

    int sec, min, hour, day;

    scanf("%d", &sec);

    min = sec/60;
    hour = min/60;
    day = hour/24;

    printf("Seconds: %d, minutes: %d, hours: %d, days: %d \n", sec, min, hour, day);
}