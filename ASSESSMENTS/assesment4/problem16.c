 #include<stdio.h>
 #include<math.h>
 int main()
 {
     int i,n,j,c=0,temp;
     scanf("%d",&n);
     temp=n;
     int first,last,middle;
     last=n%10;
     while(temp!=0)
     {  first=temp;
        temp=temp/10;
        c++;
     }
     n=n/10;
     middle=n%((int)pow(10,c-2));
     int number=(last*((int)pow(10,c-1))+(middle*10)+first);
     printf("%d",number);
     
 }
