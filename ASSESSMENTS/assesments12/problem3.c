#include<stdio.h>
#include<stdlib.h>

struct student{
int id,Maths,Science;
struct student*next;
}*top=NULL;

void push(){
struct student*n=malloc(sizeof(*n));
scanf("%d%d%d",&n->id,&n->Maths,&n->Science);
n->next=top;
top=n;
}

void pop(){
struct student*t;
if(!top)return;
t=top;
printf("%d %d %d\n",t->id,t->Maths,t->Science);
top=top->next;
free(t);
}

void display(){
struct student*t=top;
while(t){
printf("%d %d %d\n",t->id,t->Maths,t->Science);
t=t->next;
}
}

int main(){
int c;
while(1){
scanf("%d",&c);
if(c==1)push();
else if(c==2)pop();
else if(c==3)display();
else break;
}
return 0;
}
