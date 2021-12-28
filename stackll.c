#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;

};
int isEmpty(struct node *p){
    if(p==NULL)
    {return 1;}
    else{return 0;}
    
}
int isFull(struct node *p){
    struct node *h=(struct node *)malloc(sizeof(struct node));
    if(h==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
struct node * push(struct node *p,int x){
    struct node *new=(struct node *)malloc(sizeof(struct node));
    if(isFull(p)){
        printf("stach overflow");
    }
    else{
        new->data=x;
        new->next=p;
        p=new;
        printf("pushed");
    }
    return p;
}
int pop(struct node * ptr){
    if(isEmpty(ptr)){
        printf("stack underflow");
    }
    else{
        struct node *m=ptr;
        ptr=ptr->next;
        int value=m->data;
        free(m);
        printf("popped element is %d",value);
    }
   
}
struct node * peek(struct node *p,int i){
    if(p-i+1<0){
        printf("no such row");
    }
    else{
        printf("element is %d",(p-i+1)->data);
    }
return p;
}

int main(){
    struct node * top=NULL;
   // printf("stack is empty %d",isEmpty(top));
  //  printf("stack is full %d",isFull(top));
top=push(top,1);
top=push(top,2);

top=push(top,3);
top=push(top,4);
pop(top);
/*printf("\n");
for(int j=0;j<=top->next+1;j++){
top=peek(top,1);
}*/
}