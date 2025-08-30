// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"
#include <Stdio.h>
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