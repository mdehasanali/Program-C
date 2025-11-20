#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float total(float b, float c, float d){
    float t = b + c + d;
    return t;
}

void display(float water){
    if (water > 700) {
        printf("Reduce water usage.\n");
    } else if (water == 700) {
        printf("Good efficiency.\n");
    } else {
        printf("Excellent efficiency!\n");
    }
}

int main() {
    float Ba, Co, Cl;

    scanf("%f", &Ba);
    scanf("%f", &Co);
    scanf("%f", &Cl);
    float water = total(Ba, Co, Cl);
    display(water);

    return 0;
}

