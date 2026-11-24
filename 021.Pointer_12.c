#include <stdio.h>

int main()
{
    int *ptr = NULL;

    if(ptr == NULL)
    {
        printf("Pointer is NULL");
    }
    else
    {
        printf("%d", *ptr);
    }

    return 0;
}