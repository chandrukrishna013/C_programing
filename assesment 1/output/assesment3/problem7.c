#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
if((n/10)==(n%10))
printf("Success");
else
printf("Failure");
return 0;
}
