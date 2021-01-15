#include <iostream>

using namespace std;
int is(int a ,int b,int c)
{
    if(c==0)
   return(b==a);
   else 
   return((b-a)%c==0 && (b-a)/c>=0);
}
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
    cout<<is(a,b,c);
    return 0;
}
