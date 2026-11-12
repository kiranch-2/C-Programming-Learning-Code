/*
    Author      : Kiran
    Description : 
    Date        : 2026-10-26
    File Name   : PatternAssignment 5 Inverted Pyramid.c

*********  =9   i =0
 *******  = 7   i =1
  *****   = 5   i =2
   ***    = 3   i =3
    *      = 1  i =4
      
Level 2: Spaces औ
*/

#include <stdio.h>

int main(void)
{
    int row = 5;
    int col = row;

    for(int i=0; i <= row ; i++)
    {

            for(int j = 1 ; j<=(2 *col - 1); j++)
            {

                printf("*");
            }
            col--;
            printf("\n");
            
            for(int k = 0 ; k<=i; k++)
            {

                printf(" ");
            }

    }



    
    return 0;
}