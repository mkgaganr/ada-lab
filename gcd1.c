#include <stdio.h>
 int gcd(int a,int b)
    {
     while(a!=b)
      {
        if(a>b)
         a=a-b;
          else
           b=b-a;
        }
       return a;
    }
int main() 
    {
      int x,m,n;
        printf("enter the two numbers");
        scanf("%d%d",&m,&n);
        x=gcd(m,n);
        printf("gcd of two numbers is %d",x);
        return 0;
      }
   
