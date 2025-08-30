// Write an expression that checks if a number is a multiple of either 3 or 5.
#include <stdio.h>
int main()
{
    int num, checker;
    printf("Enter a number ");
    scanf("%d", &num);
    checker = num / 3 * 3 == num || num / 5 * 5 == num;
    printf("The result is: %d", checker);
    return 0;
}