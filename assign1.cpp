#include<iostream>
using namespace std;
# define MAX 100
void solve(int a[],int n,int m)
{
	while(n<m)
	{
		int temp=a[n];
		a[n]=a[m];
		a[m]=temp;
		n++;
		m--;
	}

}
void printarray(int a[],int n)
{
	for (int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	int a[MAX],n;
	cin>>n;
	for(int i=0;i<n;++i)
		cin>>a[i];
	solve(a,0,n-1);
	printarray(a,n);
	return 0;
}