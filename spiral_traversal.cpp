#include<bits/stdc++.h>
using namespace std;
void solve (vector<vector<int>>v,int r,int c)
{
	int i,k=0,l=0;
	while(k<r && l<c)
	{
		for(i=l;i<c;++i)
			cout<<v[k][i]<<" ";
		k++;
		for(i=k;i<r;++i)
			cout<<v[i][c-1]<<" ";
		c--;
		if(k<r)
		{
			for(i=c-1;i>=l;--i)
				cout<<v[r-1][i]<<" ";
		}
		r--;
		if(l<c)
		{
			for(i=r-1;i>=k;--i)
			{
				cout<<v[i][l]<<" ";
			}
		}
		l++;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	int n,m;
	cin>>n>>m;
	vector<vector<int>>v;
	for (int i=0;i<n;i++)
	{
		vector<int>temp;
		for(int j=0;j<m;j++)
		{
			int c;
			cin>>c;
			temp.push_back(c);
		}
		v.push_back(temp);
	}
	solve(v,n,m);
	return 0;
}