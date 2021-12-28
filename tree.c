#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(int data)
{
    struct node *m = (struct node *)malloc(sizeof(struct node));
    m->data = data;
    m->left = NULL;
    m->right = NULL;
    return m;
}

void preoreder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d ", root->data);
        preoreder(root->left);
        preoreder(root->right);
    }
}
void postorder(struct node *m)
{
    if (m != NULL)
    {
        postorder(m->left);
        postorder(m->right);
        printf(" %d ", m->data);
    }
}
void inorder(struct node *m)
{
    if (m != NULL)
    {
        inorder(m->left);
        printf(" %d ", m->data);
        inorder(m->right);
    }
}
int main()
{
    struct node *p = create(2);
    struct node *p1 = create(1);
    struct node *p2 = create(3);
    struct node *p3 = create(6);
    struct node *p4 = create(7);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    preoreder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    inorder(p);
    return 0;
}