#include <stdio.h>

struct Student
{
    int rollNo;
    float marks;
};

int main()
{
    struct Student s1;

    s1.rollNo = 101;
    s1.marks = 85.5;

    printf("Roll Number = %d\n", s1.rollNo);
    printf("Marks = %.2f\n", s1.marks);

    return 0;
}