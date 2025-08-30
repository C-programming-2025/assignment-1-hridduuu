
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