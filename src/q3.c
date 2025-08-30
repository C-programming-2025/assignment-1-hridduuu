// Write a C program to prompt the user for their name and display a personalized greeting message.

#include <stdio.h>

int main() {
    char name[20];
    printf("Enter your name");
    scanf("%s", name);
    printf(" Hello %s How are you?", name);
    return 0;
}