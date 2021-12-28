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

struct node * insert(struct node * head,int value){
struct node * ptr=(struct node *)malloc (sizeof(struct node));
ptr->data=value;
struct node * p=head->next;
while(p->next!=head){
    p=p->next;
}
 
ptr->next=head;
p->next=ptr;
head=ptr;
return head;

}

struct node * insertLast(struct node * head,int value){
    struct node * new = (struct node * )malloc (sizeof(struct node));
    new->data=value;
    struct node * ptr=head->next;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    ptr->next=new;
    new->next=head;
    return head;
}

struct node * insertBetween(struct node * head,int value,int index){
    struct node * new=(struct node *)malloc (sizeof(struct node));
    new->data=value;
struct node *q=head;
int i=0;
for(i=0;i<index-1;i++){
    q=q->next;
}
new->next=q->next;
    q->next=new;
    return head;
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
  //head= insert(head,5);
   //  traverse(head);
   //head= insertLast(head,2);
   // traverse(head);
    head=insertBetween(head,3,2);
    traverse(head);
return 0;






}