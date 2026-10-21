#include<stdio.h>
#include<math.h>
int main()
{
    int i,num,count=0,temp,n,t;
    scanf("%d",&num);
    temp=num;
    int c=0;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    for(i=count-2;i>=0;i--)
    {
        n=num/((int)pow(10,i));
        t=n%100;
        printf("%d\n",t);
        if(t%2!=0)
        {
            c++;
        }
    }
    printf("%d",c);
    
    
}
