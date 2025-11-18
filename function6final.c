#include <stdio.h>

float total(float power[],float time[],int n)
{
    float sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum = sum + (power[i] * time[i]) / 1000.0;
    }
    return sum;
}

void display (float t)
{
    printf("%.2f \n",t);
    if(t > 10){
        printf("High consumption \n");
    }else {
        printf("Your energy usage is efficient\n");
    }
}
int main ()
{
    int n;
    float power[100],time[100];
    float energy;
    scanf("%d",&n);

    for(int i = 0; i<n; i++)
    {
        scanf("%f %f",&power[i],&time[i]);
    }
    energy = total(power,time,n);
    display(energy);
    return 0;
}
