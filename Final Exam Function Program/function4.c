#include <stdio.h>
float cal(float pa, float pl, float gl) {
    return (pa * 3.3) + (pl * 1.5) + (gl * 0.2);
}

float save(float week) {
    return (week * 52) / 20;
}

void display(float weekly, float trees) {

    printf("Total CO₂ save: %.2f kg\n", weekly);
    printf("Trees save: %.2f trees\n", trees);
}

int main() {
    float paper, plastic, glass;

    scanf("%f %f %f", &paper, &plastic, &glass);

    float weekly = cal(paper, plastic, glass);

    float trees = save(weekly);
    display(weekly, trees);

    return 0;
}
