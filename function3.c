#include<stdio.h>
#include<stdlib.h>
#include <math.h>
float effi(float h, float c){
    float total = ((h * c * 0.8) * 7);
    return total;
}
float energy (float t){
    return t *0.43;
}
void display(float to,float co){
    printf("energy  total value :- %.2f \n\n",to);
    printf("energy total value :-%.2f\n\n",co);

    if(co > 50){
        printf("Great Impact");
    }else {
        printf("Good Start");
    }
}

int main()
{
    float hours, capacity;
    printf("Enter distance(weekly) of hours:");
    scanf("%f",&hours);
    printf("Enter distance(weekly) of capacity:");
    scanf("%f",&capacity);
    float total = effi(hours,capacity);
    float co2 = energy(total);
    display(total,co2);
    return 0;
}
