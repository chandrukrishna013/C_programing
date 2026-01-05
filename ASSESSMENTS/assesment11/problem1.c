#include<stdio.h>
int main(){
char s[100],c;
int i,f=1;
scanf("%s",s);
scanf(" %c",&c);
for(i=0;s[i];i++){
if(s[i]==c){
if(!f)printf(",");
printf("%d",i+1);
f=0;
}}
return 0;
}
