
#include <stdio.h>
int main()
{
    int a, b, c, checker;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    checker = a == b && b != c;
    printf("Result: %d", checker);
    return 0;
}