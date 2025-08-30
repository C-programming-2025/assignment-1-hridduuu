// Given a variable num, write an expression that checks if it is a power of 2.

#include <stdio.h>
#include <math.h>
int main()
{
    int num, checker;
    printf("Enter a number: ");
    scanf("%d", &num);
    checker = (num > 0) && !(num & (num - 1));
    printf("Result: %d", checker);
    return 0;
}