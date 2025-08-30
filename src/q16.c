// Given two variables x and y, write an expression that calculates the average of their values.
#include <stdio.h>
int main()
{
    float a, b, avg;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    avg = (a + b) / 2;
    printf("The average is %.2f", avg);
    return 0;
}