
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    result = (sqrt(a + b));
    printf("Result: %d", result);
    return 0;
}