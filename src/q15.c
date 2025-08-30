// Write an expression that checks if a number is both positive and even.
#include <stdio.h>

int main()

{
    int x, checker;
    printf("Enter a number: ");
    scanf("%d", &x);
    checker = x % 2 == 0 && x > 0;
    printf("%d", checker);
    return 0;
}