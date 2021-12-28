#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
    struct node * prev;
};
void traverse(struct node * ptr){
    struct node *p=ptr;
    while(p->next!=NULL){
        printf("value is--> %d \n",p->data);
        p=p->next;
    }
    printf("value %d",p->data);
}
struct node * deleteFirst(struct node * head){
    struct node * p=head->next;
    struct node * q=head;
    
    
    head=head->next;
    p->prev=NULL;
    free(q);
    return head;
}
struct node * deleteLast(struct node * head){
    struct node * p=head->next;
    struct node *q=head;
    
    while(p->next!=NULL){
        p=p->next;
        q=q->next;
    }
    q->next=NULL;
    free(p);
    return head;
}
struct node * deleteBetween(struct node * head,int index){
    struct node * p=head;
    struct node *q=head->next;
    int i=0;
    for(i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    struct node *s=q->next;
   p->next=q->next;
s->prev=p;
free(q);
return head;
}


int main(){
    struct node * head=(struct node *)malloc(sizeof(struct node));
    struct node * second=(struct node *)malloc (sizeof(struct node));
    struct node * third=(struct node *)malloc (sizeof(struct node));
    struct node * fourth=(struct node *)malloc (sizeof(struct node));
    struct node * fifth=(struct node *)malloc (sizeof(struct node));
    head->data=1;
    head->next=second;
    head->prev=NULL;
    second->data=2;
    second->next=third;
    second->prev=head;
    third->data=3;
    third->next=fourth;
    third->prev=second;
    fourth->data=4;
    fourth->next=fifth;
    fourth->prev=third;
    fifth->data=5;
    fifth->next= NULL;
    fifth->prev=fourth;
traverse(head);
//head=deleteFirst(head);
//traverse(head);
//head=deleteLast(head);
//traverse(head);
head=deleteBetween(head,1);
traverse(head);
}