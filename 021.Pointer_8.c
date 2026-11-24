#include <stdio.h>

void update(int *p)
{
    *p = 100;
}

int main()
{
    int num = 10;

    update(&num);

    printf("num = %d", num);

    return 0;
}