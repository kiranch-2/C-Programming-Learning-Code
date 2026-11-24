#include <stdio.h>

void changePointer(int **p)
{
    static int value = 50;

    *p = &value;
}

int main()
{
    int num = 10;

    int *ptr = &num;

    printf("Before: %d\n", *ptr);

    changePointer(&ptr);

    printf("After: %d\n", *ptr);

    return 0;
}