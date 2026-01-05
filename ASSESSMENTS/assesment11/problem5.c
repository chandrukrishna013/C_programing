#include<stdio.h>
int main(){
char a[51],b[51];
int r[102]={0};
int i,j,l1=0,l2=0;
scanf("%s",a);
scanf("%s",b);
while(a[l1])l1++;
while(b[l2])l2++;
for(i=l1-1;i>=0;i--){
for(j=l2-1;j>=0;j--){
r[i+j+1]+=(a[i]-'0')*(b[j]-'0');
r[i+j]+=r[i+j+1]/10;
r[i+j+1]%=10;
}}
i=0;
while(i<l1+l2&&r[i]==0)i++;
if(i==l1+l2)printf("0");
for(;i<l1+l2;i++)printf("%d",r[i]);
return 0;
}
