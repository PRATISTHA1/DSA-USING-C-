#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *a;
};
int isEmpty(struct queue *s){
    if(s->r==s->f){
        printf("empty queue");
    }
    return 0;
}
int isFull(struct queue *s){
    if(s->r==s->size-1){
        printf("queue full");
    }
    return 0;
}
void enqueue(struct queue *s,int val){
    if(isFull(s)) {
        printf("queue overflow");
    }
    else{
        s->r++;
        s->a[s->r]=val;
        printf("queue enqueue\n");
    }

}
int dequeue(struct queue *s){
    if(isEmpty(s)){
        printf("queue underflow");
    }
    else{
        s->f++;
        int val=s->a[s->f];
        printf("popped value is %d\n",val);
    }
    return 0;
}



int main(){
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->size=8;
    q->f=q->r=-1;
    q->a=(int *)malloc(q->size*sizeof(int));
    enqueue(q,1);
    enqueue(q,2);
dequeue(q);
}