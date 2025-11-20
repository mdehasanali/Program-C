#include <stdio.h>

struct employee {
    int id;
    float basic, hra, ma;

};

int main() {

    int n;
    printf("Enter the Emplayee Number: ");
    scanf("%d", &n);
    struct employee data[n];
    float sum[n];

    for (int i = 0; i < n; i++) {
        printf("Emplayee Id ");
        scanf("%d", &data[i].id);
        printf("Emplayee Basic Salary ");
        scanf("%f", &data[i].basic);
        printf("Emplayee HRA ");
        scanf("%f", &data[i].hra);
        printf("Emplayee Ma. ");
        scanf("%f", &data[i].ma);
    }

    for (int i = 0; i < n; i++) {
        sum[i] = data[i].basic + data[i].hra + data[i].ma;

        printf("\nEmplayee ID: %d\nTotal Gross Salary: %.2f\n", data[i].id, sum[i]);
    }

    return 0;
}
