#include<iostream>
using namespace std;
#define MAX 100
struct  Pair
{
	int min;
	int max;
};
struct Pair getminmax(int a[],int n)
{
	struct Pair minmax;
	int i;
	if(n==1)
	{
		minmax.min=a[0];
		minmax.max=a[0];
		return minmax;
	}
	if(a[0]>a[1])
	{
		minmax.min=a[1];
		minmax.max=a[0];
	}
	else 
	{
		minmax.min=a[0];
		minmax.max=a[1];
	}
	for(i=2;i<=n;i++)
	{
		if(a[i]>minmax.max)
			minmax.max=a[i];
		else if(a[i]<minmax.min)
			minmax.min=a[i];
	}
	return minmax;
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
	struct Pair minmax= getminmax(a,n-1);
	cout<<"Minimum Element is "<<minmax.min<<endl;
	cout<<"Maximum Element is "<<minmax.max;
	return 0;
}