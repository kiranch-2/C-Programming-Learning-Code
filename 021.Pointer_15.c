#include <stdio.h>

struct Student
{
    int rollNo;
    float marks;
};

int main()
{
    struct Student s[3] =
    {
        {101, 85.5},
        {102, 90.0},
        {103, 78.5}
    };

    for(int i = 0; i < 3; i++)
    {
        printf("Roll No: %d, Marks: %.2f\n",
               s[i].rollNo, s[i].marks);
    }

    return 0;
}