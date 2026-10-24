#include <stdio.h>
int main()
{
    int age;
    float marks;
    char grade;

    printf("Enter your age");
    scanf("%d",&age);

    printf("Enter Marks");
    scanf("%f",&marks);

    printf("Enter Grade");
    scanf("%c",&grade);

    printf("\n ----- Student Detail ------ \n");
    printf("Age %d : ", age);
    printf("\n Mark %f : ",marks);
    printf("\n grade %c : " ,grade);

    return 0;
}