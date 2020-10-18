#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	int n=5;
	int arr[MAX]={0};
	arr[0]=1;
	int q=2;
	int len=1,x=0;
	int num=0;
	while(q<=n)
	{
		x=0;num=0;
		while(x<len)
		{
			arr[x]=arr[x]*q+num;
			num=arr[x]/10;
			arr[x]=arr[x]%10;
			x++;
		}
		while(num!=0)
		{
			 arr[len]=num%10;
			 num/=10;
			 len++;
		}
		q++;
	}
	len--;
	while(len>=0)
	{
		cout<<arr[len];
		len--;
	}

	return 0;
}