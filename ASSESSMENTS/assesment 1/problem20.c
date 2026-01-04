#include<stdio.h>

int main(){
int num;
scanf("%d",&num);
printf("%d",num-5*((num/100)%2)*((num%10)%2));
return 0;
}
