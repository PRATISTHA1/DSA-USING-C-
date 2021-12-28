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
struct node * deleteFirst(struct node * head){
    struct node *p=head;
    struct node *q=head->next;
    while(p->next!=head){
        p=p->next;
        q=q->next;
    }
    p->next=head->next;
    head=head->next;
    free(q);
    return head;
}
struct node * deleteLast(struct node * head){
     struct node *p=head;
    struct node *q=head->next;
    while(q->next!=head){
        p=p->next;
        q=q->next;
    }
    p->next=head;
    free(q);
    return head;
}
struct node * deleteBetween(struct node * z,int index){
struct node * p=z;
struct node * q=z->next;

for(int i=0;i<index-1;i++){
    p=p->next;
    q=q->next;
}

p->next=q->next;
free(q);
return z;
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
  // head=deleteFirst(head);
  //traverse(head);
     //head=deleteLast(head);
    //traverse(head);
    head=deleteBetween(head,1);
    traverse(head);
return 0;
}