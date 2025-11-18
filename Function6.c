#include <stdio.h>

#define MAX 100   // Maximum number of appliances

void inputData(float power[], float time[], int n);
float calculateTotalEnergy(float power[], float time[], int n);
void displayResult(float totalEnergy);

int main() {
    int n;
    float power[MAX], time[MAX];
    float totalEnergy;

    printf("Enter number of appliances: ");
    scanf("%d", &n);

    // a. Input all appliance data
    inputData(power, time, n);

    // b. Calculate total energy
    totalEnergy = calculateTotalEnergy(power, time, n);

    // c. Display result and suggestions
    displayResult(totalEnergy);

    return 0;
}

// a. Input appliance data using arrays
void inputData(float power[], float time[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nAppliance %d\n", i + 1);

        printf("Enter power rating (watts): ");
        scanf("%f", &power[i]);

        printf("Enter usage time per week (hours): ");
        scanf("%f", &time[i]);
    }
}

// b. Calculate total energy in kWh using arrays
float calculateTotalEnergy(float power[], float time[], int n) {
    float total = 0;

    for (int i = 0; i < n; i++) {
        total += (power[i] * time[i]) / 1000.0;  // Convert Wh → kWh
    }

    return total;
}

// c. Display result with suggestions
void displayResult(float totalEnergy) {
    printf("\n-------------------------------------------\n");
    printf("Total Weekly Energy Consumption: %.2f kWh\n", totalEnergy);
    printf("-------------------------------------------\n");

    if (totalEnergy > 10) {
        printf("⚠ High consumption!\n");
        printf("→ Try reducing usage time.\n");
        printf("→ Switch to energy-efficient appliances.\n");
    } else {
        printf("✓ Your energy usage is efficient. Good job!\n");
    }
}
