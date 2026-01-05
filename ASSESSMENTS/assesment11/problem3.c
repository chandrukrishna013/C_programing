#include<stdio.h>
int main(){
char s[100],sub[50];
int i,j,f;
scanf("%s",s);
scanf("%s",sub);
for(i=0;s[i];i++){
f=1;
for(j=0;sub[j];j++){
if(s[i+j]!=sub[j]){
f=0;
break;
}}
if(f){
printf("%d",i+1);
return 0;
}}
return 0;
}
