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
void inorder(struct node *m)
{
    if (m != NULL)
    {
        inorder(m->left);
        printf(" %d ", m->data);
        inorder(m->right);
    }
}
struct node *search(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return search(root->left, key);
    }
    else
        return search(root->right, key);
}
struct node *siter(struct node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
        {
            return root;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}

int main()
{
    struct node *p = create(9);
    struct node *p1 = create(4);
    struct node *p2 = create(11);
    struct node *p3 = create(2);
    struct node *p4 = create(7);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    inorder(p);
    printf("\n");
    struct node *n = siter(p, 11);
    if (n != NULL)

    {
        printf(" found : %d", n->data);
    }
    else
    {
        printf("element not found");
    }
    return 0;
}