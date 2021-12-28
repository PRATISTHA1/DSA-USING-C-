#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int traverse(struct node *ptr){
struct node *p=ptr;
   do
   {
    printf("value of index  %d \n", p->data);
    p=p->next;
    }
   while(p!=ptr);
  return 0;
}
int main(){
    struct node * head= (struct node *)malloc(sizeof(struct node));
    struct node * second= (struct node *)malloc(sizeof(struct node));
    struct node * third= (struct node *)malloc(sizeof(struct node));
    
    head->data=7;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=9;
    third->next=head;
    traverse(head);
return 0;
}