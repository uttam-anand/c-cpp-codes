#include<bits/stdc++.h>
using namespace std;
void IO()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
int solve(int a[],int n,int x)
{
	int curr=0,len=n+1;
	int start=0,end=0;
	while(end<n)
	{
		while(curr<=x && end<n)
			curr+=a[end++];
		while(curr>x && start<n)
		{
			if(end-start<len)
				len=end-start;
			curr-=a[start++];
		}
	}
	return len;
}
int main()
{
	IO();	
	int a[]={1,4,45,6,10,19};
	int x=51;
	int n=sizeof(a)/sizeof(a[0]);
	int ans=solve(a,n,x);
	(ans==n+1)?cout<<"Not Possible": cout<<ans;
	return 0;
}