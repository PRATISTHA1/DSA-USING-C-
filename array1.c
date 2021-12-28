#include <stdio.h>
#include <stdlib.h>
struct array
{
    int capacity;
    int size_used;
    int *p;
};

void create(struct array *a, int cap, int used)
{

    a->capacity = cap;
    a->size_used = used;
    a = (struct array *)malloc(sizeof(struct array));
    a->p = (int *)malloc(cap * (sizeof(int)));
}
void display(struct array *a)
{

    for (int i = 0; i <= a->size_used; i++)
    {
        printf(" %d", (a->p)[i]);
    }
}
void val(struct array *a)
{
    int n;
    for (int i = 0; i <= a->size_used; i++)
    {
        scanf("%d", &n);
        a->p[i] = n;
    }
}

void insertion(struct array *a, int index, int value, int cap, int used)
{

    if (index >= cap)
    {
        printf("insertion cannot be done");
    }
    a->size_used++;
    for (int i = used; i >= index; i--)
    {
        a->p[i + 1] = a->p[i];
    }
    a->p[index] = value;
}

int main()
{

    struct array marks;

    create(&marks, 20, 4);
    printf("enter values");
    val(&marks);
    printf("array is");
    display(&marks);

    printf(" array values after inseretion");

    insertion(&marks, 2, 6, 20, 4);
    display(&marks);

    return 0;
}