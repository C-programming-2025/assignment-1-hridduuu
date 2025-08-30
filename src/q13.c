

#include <stdio.h>

int main()
{
    int a, result;
    printf("Enter a number: ");
    scanf("%d", &a);
    result = a / 2 * 2 == a && a / 3 * 3 == a;
    printf("The result is: %d", result);
    return 0;
}