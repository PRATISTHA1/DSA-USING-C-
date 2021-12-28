#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *a;
};
int isEmpty(struct stack *p){
    if(p->top==-1){
        return 1;
    }
    else{
        return 0;
    }}
    int isFull(struct stack *p){
        if(p->top==p->size-1){
            return 1;

        }
        else{
            return 0;
        }
    
}
void push(struct stack * p,int value){
    if(isFull(p)){
        printf("stack overflow");
    }
    else{
        p->top++;
        p->a[p->top]=value;
    }
}
int pop(struct stack *p){
    if(isEmpty(p)){
        printf("stack underflow");
    }
    else{
        int value=p->a[p->top];
        p->top--;
        printf("popped element is %d",value);
    }

    return 0;
    
}
void peek(struct stack *p,int i){
    if(p->top-i+1<0){
        printf("no elemets to peek");
    }
    else{
        printf("elemsts is %d \n",p->a[p->top-i+1]);
        
    }
}
int main(){
struct stack * sp=(struct stack *)malloc(sizeof(struct stack));
sp->size=20;
sp->top=-1;
sp->a=(int *)malloc(sp->size*(sizeof(int)));
//printf("stack is empty %d",isEmpty(sp));
/*printf("\n");
printf("stack is full %d",isFull(sp));
push(sp,1);
printf("stack is empty %d",isEmpty(sp));
printf("\n");
printf("stack is full %d",isFull(sp));
pop(sp);
printf("\n");
printf("popped");
printf("stack is empty %d",isEmpty(sp));
printf("\n");
printf("stack is full %d",isFull(sp));*/

push(sp,2);
push(sp,3);
push(sp,4);
pop(sp);
for(int j=1;j<=sp->top+1;j++){
    peek(sp,j);

}
}