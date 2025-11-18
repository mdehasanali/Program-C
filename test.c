#include<stdio.h>
#include<stdlib.h>
#include <math.h>
float co2_emmi(float C, float B)
{
    float total;
    total = C*0.2 + B*0.1;
    return total;
}
int tree(float c)
{
    int T;
    T = ceil((c*52)/20);
    return T;
}
void display(float c, int t)
{
    printf("\nTotal weekly CO2 emission = %.2f kg-co2/km\n",c);
    printf("\nEquivalent trees needed = %d\n",t);
}
int main()
{
    float car, bus;
    printf("Enter distance(weekly) of car:");
    scanf("%f",&car);
    printf("Enter distance(weekly) of bus:");
    scanf("%f",&bus);
    float CO2 = co2_emmi(car,bus);
    int Tree = tree(CO2);
    display(CO2,Tree);
    return 0;
}
