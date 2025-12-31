#include<stdio.h>

int main(){
int num,sum;
scanf("%d",&num);
sum=(num/100)+((num/10)%10)+(num%10);
while(sum>=10){
sum=(sum/10)+(sum%10);
}
printf("%d",sum);
return 0;
}
