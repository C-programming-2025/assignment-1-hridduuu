// Write a C expression that performs the following operations in a single line: increment a variable by 1, multiply it by 3, and subtract 10.
#include <stdio.h>

int main()
{
    int x, result;
    printf("Enter a number: ");
    scanf("%d", &x);
    result = ++x * 3 - 10;
    printf("The result is: %d", result);
    return 0;
}