
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
}