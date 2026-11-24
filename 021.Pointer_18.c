#include <stdio.h>

struct Student
{
    int rollNo;
    float marks;
};

void update(struct Student *ptr)
{
    ptr->marks = 95.0;
}

int main()
{
    struct Student s1 = {101, 85.5};

    update(&s1);

    printf("Updated Marks = %.2f", s1.marks);

    return 0;
}