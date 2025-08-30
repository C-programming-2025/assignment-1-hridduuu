// Create an expression that checks if a given character is an uppercase letter.
#include <stdio.h>
int main()
{
    char a;
    int checker;
    printf("Enter a character: ");
    scanf("%c", &a);
    checker = a >= 'A' && a <= 'Z';
    printf("Result: %d", checker);
    return 0;
}