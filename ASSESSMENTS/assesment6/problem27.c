#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,c=0,temp,num,num1,c1=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        temp=temp/10;
        c++;
    }
    for(i=c-2;i>=0;i--)
    {
        num=(n/(int)pow(10,i)%100);
        printf("%d\n",num);
        for(j=0;j<=9;j++)
        {
            if((j*j)==num)
            {
                c1++;
            }
            
        }
        
    }
    printf("%d",c1);
    
    
}
