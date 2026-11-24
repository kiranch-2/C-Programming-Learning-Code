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

    printf("Roll Number = %d\n", (*ptr).rollNo);

    printf("Marks = %.2f\n", (*ptr).marks);

    printf("Roll Number = %d\n", ptr->rollNo);

    return 0;
}

/*
Step 2: What does ptr contain?
Suppose the memory address of s1 is 1000.
s1 is stored at address 1000
ptr contains 1000
Remember:
ptr stores the address of the structure, not the value of its first member.
*/
/*
The structure starts at address 1000, and its first member also starts at address 1000.
Therefore, their numerical addresses are the same.
But their pointer types are different:
&s1          // struct Student *
&s1.rollNo   // int *
This distinction is extremely important.
Even if the numerical addresses are the same, the pointer types tell the compiler what type of object is being accessed.
So:
struct Student *ptr = &s1;
means ptr points to the complete structure object.
It does not mean that ptr is an integer pointer pointing only to rollNo.
*/