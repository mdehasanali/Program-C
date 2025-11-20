#include <stdio.h>

struct students {
    int roll, math, science, english;
};

int main() {

    int n;
    printf("Enter the Student Number: ");
    scanf("%d", &n);

    struct students data[n];
    float avg[n];
    int sum[n];

    for (int i = 0; i < n; i++) {
        printf("Roll Math Science English: ");
        scanf("%d %d %d %d", &data[i].roll, &data[i].math, &data[i].science, &data[i].english);
    }

    for (int i = 0; i < n; i++) {
        sum[i] = data[i].math + data[i].science + data[i].english;
        avg[i] = sum[i] / 3.0;

        printf("\nStudent ID: %d\nTotal Mark: %d\n", data[i].roll, sum[i]);
        printf("The AVG Number is: %.2f\n\n\n", avg[i]);
    }

    return 0;
}
