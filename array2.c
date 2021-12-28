#include<stdio.h>
#include <stdlib.h>
struct array{
    int capacity;
    int size_used;
    int *p;
};

void create(struct array *a,int cap,int used){
 a->capacity=cap;
 a->size_used=used;
    a->p=(int*) malloc (cap*(sizeof (int)));
    
}
void display(struct array *a){
    
for(int i=0;i<=a->size_used;i++){
    printf(" %d",(a->p)[i]);
}
}
void val(struct array *a){
    int n;
    for(int i=0;i<=a->size_used;i++)
{
scanf("%d",&n);
a->p[i]=n;
}}
void deletion(struct array *a,int used,int index){
   a->size_used--;
    for(int i=index;i<=used-1;i++){
        a->p[i]=a->p[i+1];
    }
    
}
int main(){
    
    struct array marks;
    
create(&marks,20,4);
printf("enter values");
val(&marks);
printf("array is");

display(&marks);

printf(" array values after deletion");

deletion(&marks,4,1);

display(&marks);
    return 0;
}
