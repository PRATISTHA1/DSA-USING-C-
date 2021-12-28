#include <stdio.h>
#include <stdlib.h>
struct array
{
    int capacity;
    int used;
    int *p;
};
int traverse(struct array *s)
{
    for (int i = 0; i < s->used; i++)
    {
        printf("array is %d", s->p[i]);
    }
}
int elements(struct array *s)
{
    for (int i = 0; i < s->used; i++)
    {
        scanf("%d", &s->p[i]);
    }
}

void insertion(struct array *a, int index, int value, int cap, int used)
{

    if (index >= cap)
    {
        printf("insertion cannot be done");
    }
    a->used++;
    for (int i = used - 1; i >= index; i--)
    {
        a->p[i + 1] = a->p[i];
    }
    a->p[index] = value;
}

void deletion(struct array *a, int used, int index)
{
    a->used--;
    for (int i = index; i <= used - 1; i++)
    {
        a->p[i] = a->p[i + 1];
    }
}

int main()
{
    struct array *q = (struct array *)malloc(sizeof(struct array));

    q->capacity = 50;
    q->used = 4;
    q->p = (int *)malloc(q->capacity * (sizeof(int)));
    printf("enter");
    elements(q);
    traverse(q);
    insertion(q, 2, 23, q->capacity, q->used);
    traverse(q);
    deletion(q, 4, 1);
    traverse(q);
}