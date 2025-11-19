#include <stdio.h>
float energy(float fa, float li, float ac) {
    float fP = 0.075;
    float lP = 0.020;
    float aP = 1.500;	
    return (fa * fP) + (li * lP) + (ac * aP);
}

float emission(float energy) {
    return energy * 0.43;
}

void display(float en, float CO2) {
    printf("Total Energy Used: %.2f kWh\n", en);
    printf("Total CO₂ Emission: %.2f kg\n", CO2);

    if (en <= 20) {
        printf("Efficient\n");
    } else if (en <= 40) {
        printf("Moderate\n");
    } else {
        printf("High\n");
    }
}

int main() {
    float fan, light, ac;
    scanf("%f %f %f", &fan, &light, &ac);

    float total = energy(fan, light, ac);
    float tCO2 = emission(total);
	
    display(total, tCO2);

    return 0;
}
