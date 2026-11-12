/*
    Author      : Kiran
    Description : \
    Date        : 2026-10-26
    File Name   : PatternAssignment -6 Dimond Pattern.c
    *
   ***
  *****
   ***
    *
*/

#include <stdio.h>

int main(void)
{
    int row = 4;
    int space = row-1;
    for(int i = 0 ; i< row ; i++)
    {
        //space
        for(int j = 0; j<= space ; j++)
        {
            printf(" ");
        }
        space--;
        for(int k = 0; k < 2*i+1;k++)
        {
            printf("*");
        }       
        printf("\n");
    }
    //printf("\n");
    for(int i = row-1 ; i> 0; i--)
    {
         //space
        for(int j = 0; j<= space+2 ; j++)
        {
            printf(" ");
        }
        space++;     
        for(int k = 2*i-1; k >0 ;k--)
        {
            printf("*");
        }       
        printf("\n");
  
    }
    return 0;
}