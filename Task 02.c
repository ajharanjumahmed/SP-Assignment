#include<stdio.h>

float calculateAverage(float a, float b)
{
    float sum = a+b;
    return (sum/2);
}

int main()
{
    float a,b;
    scanf("%f %f", &a, &b);
    printf("%f\n", calculateAverage(a,b));
    return 0;
}
