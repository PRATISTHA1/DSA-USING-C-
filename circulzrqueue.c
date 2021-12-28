#include<stdio.h>
#include<stdlib.h>
struct cqueue {
    int size;
    int f;
    int r;
    int *a;
};
int isEmpty(struct cqueue *s){
    if(s->r==s->f){
        printf("circular queue empty");
    }
    return 0;
}
int isFull(struct cqueue *s){
    if((s->r +1)%s->size == s->f){
        printf("circular queue full");
    }
    return 0;
}
void enqueue(struct cqueue *s,int val){
    if(isFull(s)){
        printf("overflow\n");
    }
    else{
        
     s->r = (s->r +1)%s->size;
    s->a[s->r]=val;
    printf("enqueued %d\n",val);
    }
    
}

int dequeue(struct cqueue *s){
     int value=-1;
    if(isEmpty(s)){
        printf("underflow\n");
    }
    else{
       
        s->f=(s->f +1)%s->size;
        value=s->a[s->f];
        printf("popped element is %d \n",value);
    }
    return 0;
}
int main(){
    struct cqueue *cq=(struct cqueue *)malloc(sizeof(struct cqueue));
    cq->size=4;
    cq->f=cq->r=0;
    cq->a=(int *)malloc(cq->size*sizeof(int));
    enqueue(cq,1);
    enqueue(cq,2);
    enqueue(cq,3);
    dequeue(cq);
    dequeue(cq);
    dequeue(cq);
    enqueue(cq,4);
    enqueue(cq,5);
   enqueue(cq,6);
    isEmpty(cq);
    isFull(cq);
}


