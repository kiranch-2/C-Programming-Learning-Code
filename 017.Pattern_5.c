/*
    Author      : Kiran
    Description : 
    Date        : 2026-10-26
    File Name   : PatternAssignment 7 Hollow Diamond Pattern.c

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *    
*/

#include <stdio.h>

int main(void)
{
    int row = 5;
    int space = row-1;
    for(int i = 0 ; i<row ; i++)
    {   
        //Space
        for(int j =0; j<=space ;j++)
        {
            printf(" " );
        }
        space--;
        for(int k =0; k<2*i+2 ;k++)
        {
            if(k==0 || k  == 2*i)
            {
                printf("*" );
            }
            else
            {
                printf(" ");
            }
        }  
        printf("\n" );      
    }
// -------------------

    int col = row;
    for(int i = 0 ; i<=row ; i++)
    {   
        //Space
        for(int j =0; j<=i+1 ;j++)
        {
    
            printf(" " );
        }
        
        for(int k = 0; k<=col+1;k++)
        {
           if(k==0 || k == col+1 )
            {
 
            printf("*" );
            }
           else{
               printf(" " );
            }
        }
        col = col -2;    
        
        printf("\n" );      
    }



    return 0;
}