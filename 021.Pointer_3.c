#include <stdio.h>

int main()
{
    int num = 50;
    int *ptr = &num;

    *ptr = 100;

    printf("num = %d\n", num);

    return 0;
}