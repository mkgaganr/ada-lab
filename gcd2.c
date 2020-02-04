#include <stdio.h>
 int gcd(int a,int b)
   { 
    int small;
    small=min(a,b);
      while(1)
      { 
        if(a%small==0 && b%small==0)
         return small;
         small=small-1;
        }
     }
   int min(int a,int b)
      {
        if(a>b)
         return b;
        else
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
   
