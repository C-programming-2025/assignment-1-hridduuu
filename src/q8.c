/* Write a C program to convert temperature from Celsius to Fahrenheit. Prompt the user for a
temperature in Celsius and display the equivalent temperature in Fahrenheit.
(Formula: fahrenheit = (celsius * 9 / 5) + 32) */
#include <stdio.h>
int main()
{
    int temp_celsius, temp_farhenheit;
    printf("Enter the temperature in celsius:");
    scanf("%d", &temp_celsius);
    temp_farhenheit = (temp_celsius * 9 / 5) + 32;
    printf("The temperature in farhenheit is: %d", temp_farhenheit);
    return 0;
}