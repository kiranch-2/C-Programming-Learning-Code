#include<stdio.h>
int addTwoNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = addTwoNumbers(num1, num2);
    printf("Sum: %d\n", sum);
    return 0;
}