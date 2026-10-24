#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);

    printf("\n Addition of %d and %d is : %d",a,b,a+b);
    printf("\n Subtraction of %d and %d is : %d",a,b,a-b);
    printf("\n Multiplication of %d and %d is : %d",a,b,a*b);
    printf("\n Division of %d and %d is : %f",a,b,(float)a/b);
    printf("\n Modulus of %d and %d is : %d",a,b,a%b);

    return 0;
}   
