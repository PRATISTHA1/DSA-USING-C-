#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int traverse(struct node * ptr){
   while(ptr!=NULL){
    printf("value of index  %d \n", ptr->data);
    ptr=ptr->next;}
}

//struct node * deleteFirst(struct node * head){
   // struct node * del=head;
    //head=head->next;
    //free(del);
    //return head;
//}

//struct node * deleteBetween(struct node * head,int index){
//struct node * p=head;
//struct node * q=head->next;

//for(int i=0;i<index-1;i++){
  //  p=p->next;
    //q=q->next;
//}

//p->next=q->next;
//free(q);
//return head;
//}

struct node * deleteLast(struct node * j){
    struct node * p=j;
    struct node * q=j->next;
     
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return j;
}

int main(){
    struct node * head= (struct node *)malloc(sizeof(struct node));
    struct node * second= (struct node *)malloc(sizeof(struct node));
    struct node * third= (struct node *)malloc(sizeof(struct node));
    struct node * fourth= (struct node *)malloc(sizeof(struct node));
    head->data=7;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=9;
    third->next=fourth;

    fourth->data=4;
    fourth->next=NULL;
    traverse(head);
   //head= deleteFirst(head);
    //traverse(head);
 //   head=deleteBetween(head,2);
   // traverse(head);
   head=deleteLast(head);
   traverse(head);
return 0;
}