#include<stdio.h>
#include<stdlib.h>
struct queue *f=NULL;
    struct queue *r=NULL;

struct queue {
     int data;
     struct queue *next;
};
    int isEmpty(){
        if(f==NULL){
            printf("queue is empty");
        }
return 0;
    }
    int isFull(){
        struct queue *n=(struct queue * )malloc(sizeof(struct queue));
        if(n==NULL){
            printf("queueu full");
        }
        return 0;
    }
    void enqueue(int val){
    struct queue * new=(struct queue *)malloc(sizeof(struct queue));
    new->data=val;
    new->next=NULL;
    if(isFull()){
        printf("overflow");
    }
    else{
    if(f==NULL){
                   f=r=new;
    }
    else{
        r->next=new;
        r=new;
    }
    printf("enqued %d\n",val);
    }
}
int deque(){
    int val=-1;
    struct queue *p=f;

    if(isEmpty()){
        printf("empty");
    }
    else{
      f=f->next;
      val=p->data;
      free(p);  
    }
    printf("value popped is %d",val);
    return 0;
}
int traverse(){
    
  struct queue * ptr;
  ptr=f;
  while(ptr!=NULL){
      printf("%d",ptr->data);
      ptr=ptr->next;
  }
    return 0;
}
int main(){
    enqueue(4);
    enqueue(5);
    enqueue(6);
   traverse();
}