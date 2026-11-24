#include<stdio.h>
int multiplyTwoNumbers(int a, int b) {
    return a * b;
}
void display(void)
{
    printf("Welcome to C Programming\n");
}
void add(int a, int b)
{
    printf("Sum = %d", a + b);
}

int getNumber(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    return n;
}

int main() {
    display();

    int num;
    num = getNumber();
    printf("Number = %d", num);

    int num1, num2, product;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    add(num1, num2);

    product = multiplyTwoNumbers(num1, num2);
    printf("Product: %d\n", product);

    return 0;
}
