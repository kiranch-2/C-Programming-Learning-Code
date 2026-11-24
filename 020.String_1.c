#include <stdio.h>

int main()
{
    char name[30];

    printf("Enter your name: ");
    scanf("%29s", name);

    printf("Your name is: %s", name);

    return 0;
}