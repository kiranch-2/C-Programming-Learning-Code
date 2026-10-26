/*
    Author      : Kiran
    Description : 
    Date        : 2026-10-26
    File Name   : 016.MenuDrivenCalculator.c
*/

#include <stdio.h>

int main(void)
{
    int choice;
    float a,b;
    
    do
    {
        /* code */
        printf("\n--- CALCULATOR MENU ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3)
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }
        
        switch (choice)
        {
            case 1:
                printf("Result = %.2f\n", a + b);
                break;

            case 2:
                printf("Result = %.2f\n", a - b);
                break;

            case 3:
                printf("Result = %.2f\n", a * b);
                break;

            case 0:
                printf("Calculator closed.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    }
    while (choice != 0);
   
    return 0;
}