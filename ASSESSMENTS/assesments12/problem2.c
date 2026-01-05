#include<stdio.h>
#include<stdlib.h>

struct student{
int id,Maths,Science;
struct student*next;
}*h=NULL;

void insert(){
int p;
struct student*n,*t;
n=malloc(sizeof(*n));
scanf("%d%d%d%d",&n->id,&n->Maths,&n->Science,&p);
n->next=NULL;
if(!h){h=n;return;}
for(t=h;t;t=t->next)
if(t->id==p){n->next=t->next;t->next=n;return;}
}

void del(){
int id;
struct student*t=h,*p=NULL;
scanf("%d",&id);
for(;t;t=t->next){
if(t->id==id){
if(!p)h=t->next;
else p->next=t->next;
free(t);return;}
p=t;}
}

void disp(){
struct student*t=h;
for(;t;t=t->next)
printf("%d %d %d\n",t->id,t->Maths,t->Science);
}

int main(){
int c;
while(scanf("%d",&c)){
if(c==1)insert();
else if(c==2)del();
else if(c==3)disp();
else break;
}
return 0;
}
