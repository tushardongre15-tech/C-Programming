
#include <stdio.h>

int main()
{
    char name[70];

    printf("Enter your name: ");
    scanf("%69s", name);

    printf("Hello! %s", name);
    printf("\nWelcome to Robotics Automation: %s\n", name);

    return 0;
}
