#include<stdio.h>
int main(){
char s[200];
int i,c=0;
gets(s);
for(i=0;s[i];i++){
if((i==0&&s[i]!=' ')||(s[i]!=' '&&s[i-1]==' '))
c++;
}
printf("%d",c);
return 0;
}