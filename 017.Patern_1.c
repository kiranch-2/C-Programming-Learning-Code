/*
* * * * *
* * * *
* * *
* *
*
*/
#include <stdio.h>

int main(void)
{
    int i = 5;

    for (; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}