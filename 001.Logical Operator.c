#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);

    printf("AND = %d\n", (a > 5) && (b < 10));
    printf("OR = %d\n", (a < 5) || (b < 10));
    printf("NOT = %d\n", !(a > 5));

    return 0;
}