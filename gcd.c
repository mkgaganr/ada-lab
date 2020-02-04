#include <stdio.h>
int gcd(int a,int b)
     { 
       int rem;
       while(b!=0)
       {
        rem=a%b;
         a=b;
          b=rem;
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
    
    
