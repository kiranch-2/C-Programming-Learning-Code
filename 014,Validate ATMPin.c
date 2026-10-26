/*
    Author      : Kiran
    Description : 
    Date        : 2026-10-26
    File Name   : 014,Validate ATMPin.c
*/

#include <stdio.h>

int main(void)
{
    int pin = 0;
    printf("Please enter the Pin");
    scanf("%d",&pin);
    while(pin != 1234)
    {
        printf("Wrond Pin Entered Please enter the Correct  Pin");
        scanf("%d",&pin);
    }
    printf("Pin Accepted");
    return 0;
}