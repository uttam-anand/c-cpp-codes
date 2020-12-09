#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
void solve (int a[],int n,int k)
{
	set<int>s(a,a+n);
	set<int>::iterator itr;
	itr=s.begin();
	advance(itr,k-1);
	cout<<*itr;

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