/*
    Author      : Kiran
    Description : 
    Date        : 2026-10-26
    File Name   : A.09.HolloSquare.c

*****
*   *
*   *
*   *
*****
*/

#include <stdio.h>

int main(void)
{
    int row =5;
    int col = 5;
    for(int i =0; i<row; i++)
    {
        for(int j =0 ; j<col ; j++)
        {
           if(j==0 || j == col-1|| i ==0 || i ==row-1)
           {
            printf("*");
           }
           else{
            printf(" " );
           }
        }
        printf("\n");
    }
    return 0;
}