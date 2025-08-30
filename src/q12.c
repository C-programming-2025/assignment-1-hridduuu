
#include <stdio.h>

int main()
{
    int a, b, c, result;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    result = a > b && c != 0;
    printf("The result is: %u", result);
    return 0;
}