
#include <stdio.h>
int main()
{
    int input, week, day;
    printf("Enter the number of days:");
    scanf("%d", &input);
    week = input / 7;
    day = input % 7;
    printf("%d week and %d days", week, day);
    return 0;
}