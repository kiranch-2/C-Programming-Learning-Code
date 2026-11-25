/*
    Author      : Kiran
    Description : 
    Date        : 2026-11-24
    File Name   : PatternAssignment -4 Full Pyramid.c

*/
#include <stdio.h>
int main()
{
    int arr[5] = {5, 3, 8, 2, 1};
    int i, j, temp;

    for(i = 0; i < 5 - 1; i++)
    {
        for(j = 0; j < 5 - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
} 
