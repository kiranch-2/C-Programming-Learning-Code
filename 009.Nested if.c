#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>0)
    {
        if(b>0)
        {
            printf("Both numbers are positive");
        }
        else
        {
            printf("First number is positive and second number is not positive");
        }
    }
    else
    {
        if(b>0)
        {
            printf("First number is not positive and second number is positive");
        }
        else
        {
            printf("Both numbers are not positive");
        }
    }
    return 0;
}   