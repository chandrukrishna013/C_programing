#include<stdio.h>
int main(){
char a[51],b[51],r[52];
int i,j,k=0,c=0,s;
scanf("%s",a);
scanf("%s",b);
for(i=0;a[i];i++);
for(j=0;b[j];j++);
i--;j--;
while(i>=0||j>=0||c){
s=c;
if(i>=0)s+=a[i--]-'0';
if(j>=0)s+=b[j--]-'0';
r[k++]=s%10+'0';
c=s/10;
}
while(k--)printf("%c",r[k]);
return 0;
}
