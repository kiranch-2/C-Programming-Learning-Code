/*
    Author      : Kiran
    Description : 
    Date        : 2026-10-26
    File Name   : 012,MultiplicationTable.c
*/

#include <stdio.h>

int main(void)
{
    int num = 10;

    for( int i = 1 ;i<11; i++)
    {
        printf("%d * %d = %d \n", num , i, num*i);
        
    }


    return 0;
}