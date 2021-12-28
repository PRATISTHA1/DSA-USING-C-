#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void traverse(struct node *ptr)
{
    struct node *p = ptr;
    while (p->next != NULL)
    {
        printf("value is--> %d \n", p->data);
        p = p->next;
    }
    printf("value is--> %d \n", p->data);
}

struct node *insertFirst(struct node *head, struct node *second, int value)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    struct node *q = head;

    new->data = value;
    q->prev = new;
    new->next = head;

    new->prev = NULL;

    head = new;
    return head;
}

struct node *insertLast(struct node *head, int value)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = value;
    struct node *q = head;
    while (q->next != NULL)
    {
        q = q->next;
    }
    new->next = NULL;
    new->prev = q;
    q->next = new;
    return head;
}
struct node *insertBetween(struct node *head, int value, int index)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    struct node *q = head;
    int i = 0;
    for (i = 0; i < index - 1; i++)
    {
        q = q->next;
    }
    new->data = value;
    new->next = q->next;
    new->prev = q;
    q->next = new;
    return head;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->next = second;
    head->prev = NULL;
    second->data = 2;
    second->next = third;
    second->prev = head;
    third->data = 3;
    third->next = fourth;
    third->prev = second;
    fourth->data = 4;
    fourth->next = fifth;
    fourth->prev = third;
    fifth->data = 5;
    fifth->next = NULL;
    fifth->prev = fourth;
    //traverse(head);

    head = insertFirst(head, second, 6);
    traverse(head);
    //head=insertLast(head,8);
    //traverse(head);
    //head = insertBetween(head, 9, 2);
    //traverse(head);
}