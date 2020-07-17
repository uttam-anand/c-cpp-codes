#include <stdio.h>
int gcd(int m,int n)
{
int t;
 a:
 (m>n)?(t=n):(t=m);
 if(m%t==0)
   if(n%t==0)
     return t;
  t--;
  goto a;
 
}
int main()
{
 int n,m;
 scanf("%d %d",&m,&n);
 printf("%d",gcd(m,n));
 return 0;
}
