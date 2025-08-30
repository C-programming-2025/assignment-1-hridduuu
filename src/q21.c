// Create an expression that swaps the values of three variables x, y, and z in a cyclic order (i.e., x becomes y, y becomes z, and z becomes x).
#include <stdio.h>
int main()
{
    int x, y, z, a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    a = x;
    b = y;
    c = z;
    x = b;
    y = c;
    z = a;
    printf("The values in cyclic order after swapping are %d %d %d", x, y, z);
    return 0;
}