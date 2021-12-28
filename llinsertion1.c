#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
int traverse(struct node * head){
   while(head!=NULL){
    printf("value of index  %d \n", head->data);
    head=head->next;
   
    }
 return 0;
 }



/*struct node * insertBetween(struct node * head,int value,int index){
    struct node * q=head;
    struct node * new=(struct node *)malloc(sizeof(struct node));
    int i=0;
    for(i=0;i<index-1;i++){
         q=q->next;
    }
    new->data=value;
    new->next=q->next;
    q->next=new;
    return head;
}


struct node * insertLast(struct node * head,int value){
    struct node * q=head;
    struct node * new= (struct node *)malloc(sizeof(struct node));
    while(q->next!=NULL){
        q=q->next;
    }
    new->data=value;
    q->next=new;
    new->next=NULL;
}*/
int main(){
    struct node *head=(struct node *)malloc (sizeof(struct node));
    
    struct node * second= (struct node *)malloc(sizeof(struct node));
    struct node * third= (struct node *)malloc(sizeof(struct node));
    
    head->data=7;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=9;
    third->next=NULL;
   // traverse(head);
 head= insertBegin(head,65);
    traverse(head);
    //head=insertBetween(head,42,2);
    //traverse(head);
    //head=insertLast(head,78);
    //traverse(head);
return 0;
}