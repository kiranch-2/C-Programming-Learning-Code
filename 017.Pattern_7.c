/*
    Author      : Kiran
    Description : 
    Date        : 2026-10-26
    File Name   : A.10.NumberPyramid.c

    1
   123
  12345
 1234567
123456789
*/

#include <stdio.h>

int main(void)
{
    int row =5;
    int space = row-1;
    for(int i =0; i<row; i++)
    {

        //space 
        for(int j = 0; j<space; j++)
        {
            printf(" ");
        }
        space--;
        int num = 1 ;
        for(int k=0; k< 2*i+1;k++)
        {
           printf("%d",num);
            num++;
        }
        printf("\n")
;
        
    }
    
    return 0;
}