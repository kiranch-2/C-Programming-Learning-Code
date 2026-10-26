#include <stdio.h>
/*
    Author      : Kiran
    Description : 
    Date        : 2026-10-26
    File Name   : 011.ForLoop.c
*/

#include <stdio.h>

int main(void)
{
    int mark , total = 0;
    float average;

    for(int i =1; i<6 ; i++)
    {

        printf("Eneter the mark for the sublect %d", i);
        scanf("%d",&mark);
        total = total +mark;

    }
    average = total / 5;
    printf("Total Mark is %d ", total );
    printf("Average is %f ",average);
    
    return 0;
}