/*
    Author      : Kiran
    Description : 
    Date        : 2026-10-26
    File Name   : PatternAssignment -4 Full Pyramid.c
    *
   ***
  *****
 *******
*********
*/

#include <stdio.h>

int main(void)
{
    int row = 5;
    int space = row ;
    int colum = 0;
    for(int i = 0; i< row ; i++)
    {
        space = space - 1;
        for(int k = 0; k< space; k++)
        {
            printf(" ");

        }

        
        for(int j = 0; j<= i; j++)
        {
            
            
            printf("*");
           
            
        }
        for(int j = 0; j< i; j++)
        {
   
            printf("*");
            
        }

        
        printf("\n");
    }
    
    return 0;
}