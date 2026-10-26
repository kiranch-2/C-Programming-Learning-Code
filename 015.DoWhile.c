/*
    Author      : Kiran
    Description : 
    Date        : 2026-10-26
    File Name   : 015.DoWhile.c
*/

#include <stdio.h>

int main(void)
{
    int choice = 0;
    int num = 0;
    int square = 0;
    do
    {
        printf("Please Enter a number  ");
        scanf("%d",&num);  
        square = num * num;
        printf("Square of number is %d  ", square);
        
        /* code */
        printf("\nDo you want to continue  ");
        scanf("%d",&choice);
    } while (choice ==1);
    
    return 0;
}