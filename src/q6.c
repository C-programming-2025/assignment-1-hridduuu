// Write a C program to calculate the area of a rectangle. Prompt the user to enter the length and width, and display the result.
#include <stdio.h>
int main ()
{
    int length, breadth, area;
    printf("Enter the length and breadth of the rectangle:");
    scanf("%d %d", &length, &breadth);
    area = length * breadth;
    printf("The area is: %d", area);
    return 0;
}