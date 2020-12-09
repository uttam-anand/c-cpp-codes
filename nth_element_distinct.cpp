#include<iostream>
#include<algorithm>
using namespace std;
void solve (int a[],int n,int k)
{
	nth_element(a,a+k-1,a+n);
	cout<<a[k-1]<<" "<<a[n-k+1];
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
	int k;
	cin>>k;
	solve(a,n,k);
	return 0;
}