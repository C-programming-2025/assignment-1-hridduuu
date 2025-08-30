// Create an expression that checks if a given number is a perfect square.
#include <stdio.h>
#include <math.h>
int main()
{
    int num, sq, res, checker;
    printf("Enter any number: ");
    scanf("%d", &num);
    sq = sqrt(num);
    res = pow(sq, 2);
    checker = res == num;
    printf("Result: %d", checker);
    return 0;
}