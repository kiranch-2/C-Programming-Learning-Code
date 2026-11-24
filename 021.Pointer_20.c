#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *first = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));

    if(first == NULL || second == NULL)
    {
        printf("Memory allocation failed");

        free(first);
        free(second);

        return 1;
    }

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = NULL;

    printf("%d\n", first->data);
    printf("%d\n", first->next->data);

    free(second);
    free(first);

    return 0;
}