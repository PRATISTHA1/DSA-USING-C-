#include <stdio.h>
#include <stdlib.h>
struct arr
{
    int size;
    int used;
    int *a;
};
int creation(struct arr *q)
{
    int i;
    printf("enter array elements");
    for (i = 0; i <= q->used; i++)
    {
        scanf("%d", &q->a[i]);
    }
}
int traverse(struct arr *q)
{
    printf("array elements are ");
    for (int i = 0; i <= q->used; i++)
    {
        printf("%d", q->a[i]);
    }
}
int reverssal(struct arr *q)
{
    int temp;
    int i = 0;
    while (q->a[i] < q->a[q->used])
    {
        temp = q->a[i];
        q->a[i] = q->a[q->used];
        q->a[q->used] = temp;
        i++;
        q->used--;
    }
}
/*int reverse(struct arr *q,struct arr *r){
   
  
   for(int i=0;i<=r->used;i++){
       r->a[i]=q->a[q->used];
       q->used--;
   }

    }*/
int main()
{
    struct arr *p = (struct arr *)malloc(sizeof(struct arr));
    p->size = 10;
    p->used = 5;
    p->a = (int *)malloc(p->size * sizeof(int));
    creation(p);
    traverse(p);
    //struct arr *new = (struct arr *)malloc(sizeof(struct arr));
    //new->size = p->size;
    //new->used = p->used;
    //new->a = (int *)malloc(sizeof(int));
    //reverse(p,new);
    //traverse(new);
    reverssal(p);
    traverse(p);
}