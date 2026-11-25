/*
    Author      : Kiran
    Description : 
    Date        : 2026-11-24
    File Name   : PatternAssignment -4 Full Pyramid.c

*/
#include <stdio.h>
int main()
{

    int arr[100] = {10,20,30,40,50,60,70,80,90,100};
    int key;
    printf("Enter the key to search: ");
    scanf("%d", &key);
    int found = 0;
    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            printf("Key %d found at index %d\n", key, i);
            break;
        }
    }
    if(!found)
    {
        printf("Key %d not found\n", key);
    }   
}
