#include <stdio.h>

struct Student
{
    int rollNo;
    float marks;
};

int main()
{
    struct Student s1 = {101, 85.5};

    struct Student *ptr = &s1;

    printf("Roll Number = %d\n", ptr->rollNo);
    printf("Marks = %.2f\n", ptr->marks);

    return 0;
}