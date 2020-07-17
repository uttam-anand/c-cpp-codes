#include<stdio.h>
int gcd(int m,int n)
{
 if(n==0)
 return m;
  return gcd(n,m%n);
 
}
int main()
{
 int n,m;
scanf("%d%d",&m,&n);
printf("GCD of %d and %d is %d",m,n,gcd(m,n));
 return 0;
}
